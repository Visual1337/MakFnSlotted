//#include "overlay.h"
//#include <comdef.h>
//#include <corecrt.h>
//#include <stdarg.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <d3d9.h>
//#include <tchar.h>
//#include "imgui.h"
//#include "imgui_impl_win32.h"
//#include "imgui_impl_dx9.h"
//
//static LPDIRECT3D9              g_pD3D = NULL;
//static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
//static D3DPRESENT_PARAMETERS    g_d3dpp = {};
//
//inline bool CreateDeviceD3D(HWND hWnd)
//{
//    if ((g_pD3D = Direct3DCreate9(D3D_SDK_VERSION)) == NULL)
//        return false;
//
//    // Create the D3DDevice
//    ZeroMemory(&g_d3dpp, sizeof(g_d3dpp));
//    g_d3dpp.Windowed = TRUE;
//    g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
//    g_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN; // Need to use an explicit format with alpha if needing per-pixel alpha composition.
//    g_d3dpp.EnableAutoDepthStencil = TRUE;
//    g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
//    g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE;           // Present with vsync
//    //g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;   // Present without vsync, maximum unthrottled framerate
//    if (g_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
//        return false;
//
//    return true;
//}
//
//inline void CleanupDeviceD3D()
//{
//    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
//    if (g_pD3D) { g_pD3D->Release(); g_pD3D = NULL; }
//}
//
//inline void ResetDevice()
//{
//    ImGui_ImplDX9_InvalidateDeviceObjects();
//    HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
//    if (hr == D3DERR_INVALIDCALL)
//        IM_ASSERT(0);
//    ImGui_ImplDX9_CreateDeviceObjects();
//}
//
//// Forward declare message handler from imgui_impl_win32.cpp
//extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
//
//// Win32 message handler
//inline LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
//        return true;
//
//    switch (msg)
//    {
//    case WM_SIZE:
//        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
//        {
//            g_d3dpp.BackBufferWidth = LOWORD(lParam);
//            g_d3dpp.BackBufferHeight = HIWORD(lParam);
//            ResetDevice();
//        }
//        return 0;
//    case WM_SYSCOMMAND:
//        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
//            return 0;
//        break;
//    case WM_DESTROY:
//        ::PostQuitMessage(0);
//        return 0;
//    }
//    return ::DefWindowProc(hWnd, msg, wParam, lParam);
//}
//
//inline bool CreateDeviceD3D(HWND hWnd);
//inline void CleanupDeviceD3D();
//inline void ResetDevice();
//inline LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
//
//bool Overlay::init()
//{
//    window = FindWindowA("CEF-OSC-WIDGET", "NVIDIA GeForce Overlay");
//
//    if (!window)
//        return false;
//
//    auto info = GetWindowLongA(window, -20);
//
//    if (!info)
//        return false;
//
//    auto attrchange = SetWindowLongPtrA(window, -20, (LONG_PTR)(info | 0x20));
//
//    if (!attrchange)
//        return false;
//
//    MARGINS margin;
//    margin.cyBottomHeight = margin.cyTopHeight = margin.cxLeftWidth = margin.cxRightWidth = -1;
//
//    if (DwmExtendFrameIntoClientArea(window, &margin) != S_OK)
//        return false;
//
//    if (!SetLayeredWindowAttributes(window, 0x000000, 0xFF, 0x02))
//        return false;
//
//    if (!SetWindowPos(window, HWND_TOPMOST, 0, 0, 0, 0, 0x0002 | 0x0001))
//        return false;
//
//    if (!CreateDeviceD3D(window))
//    {
//        CleanupDeviceD3D();
//        return 1;
//    }
//
//    ShowWindow(window, SW_SHOW);
//
//    ImGui::CreateContext();
//    ImGuiIO& io = ImGui::GetIO(); (void)io;
//
//    ImGui::StyleColorsDark();
//
//    ImGui_ImplWin32_Init(window);
//    ImGui_ImplDX9_Init(g_pd3dDevice);
//    bool done = true;
//
//    bool show_demo_window;
//    bool show_another_window;
//
//    while (!done)
//    {
//        MSG msg;
//        while (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
//        {
//            ::TranslateMessage(&msg);
//            ::DispatchMessage(&msg);
//            if (msg.message == WM_QUIT)
//                done = true;
//        }
//
//        if (done)
//            break;
//
//        // Start the Dear ImGui frame
//        ImGui_ImplDX9_NewFrame();
//        ImGui_ImplWin32_NewFrame();
//        ImGui::NewFrame();
//
//        // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
//        {
//            static float f = 0.0f;
//            static int counter = 0;
//
//            ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.
//
//            ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
//            ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
//            ImGui::Checkbox("Another Window", &show_another_window);
//
//            ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
//
//            if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
//                counter++;
//            ImGui::SameLine();
//            ImGui::Text("counter = %d", counter);
//
//            ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
//            ImGui::End();
//        }
//
//        // 3. Show another simple window.
//        if (show_another_window)
//        {
//            ImGui::Begin("Another Window", &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
//            ImGui::Text("Hello from another window!");
//            if (ImGui::Button("Close Me"))
//                show_another_window = false;
//            ImGui::End();
//        }
//
//        // Rendering
//        ImGui::EndFrame();
//        g_pd3dDevice->SetRenderState(D3DRS_ZENABLE, FALSE);
//        g_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, FALSE);
//        g_pd3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, FALSE);
//        if (g_pd3dDevice->BeginScene() >= 0)
//        {
//            ImGui::Render();
//            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
//            g_pd3dDevice->EndScene();
//        }
//        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
//
//        // Handle loss of D3D9 device
//        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
//            ResetDevice();
//    }
//
//    return true;
//}
//
