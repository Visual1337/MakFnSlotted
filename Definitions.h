#pragma once
#include <vector>

struct { //color configs
	float Black[3];
	float RGBRed[3] = { 1.0f, 0.0f, 0.0f };
	float RGBYelllow[3] = { 1.0f, 1.0f, 0.0f };
	float RGBGreen[3] = { 0.0f, 1.0f, 0.0f };
	float RGBBlue[3] = { 0.0f, 0.0f, 1.0f };
	float CMYKRed[3] = { 0.92f, 0.10f, 0.14f };
	float CMYKYellow[3] = { 1.0f, 0.94f, 0.0f };
	float CMYKGreen[3] = { 0.0f, 0.65f, 3.17f };
	float CMYKBlue[3] = { 0.18f, 0.19f, 0.57f };
	float PastelRed[3] = { 255.00f, 0.00f, 119.00f };
	float PastelRedOrange[3] = { 0.97f, 0.67f, 0.50f };
	float PastelYellowOrange[3] = { 0.99f, 0.77f, 0.53f };
	float PastelYellow[3] = { 1.0f, 0.96f, 0.6f };
	float PastelPeaGreen[3] = { 0.76f, 0.87f, 0.60f };
	float PastelYellowGreen[3] = { 0.63f, 0.82f, 0.61f };
	float PastelGreen[3] = { 0.50f, 0.79f, 0.61f };
	float PastelGreenCyan[3] = { 0.47f, 0.8f, 0.78f };
	float PastelCyan[3] = { 0.42f, 0.81f, 0.96f };
	float PastelCyanBlue[3] = { 0.49f, 0.65f, 0.85f };
	float PastelBlue[3] = { 0.51f, 0.57f, 0.79f };
	float PastelBlueViolet[3] = { 0.52f, 0.50f, 0.74f };
	float PastelViolet[3] = { 0.63f, 0.52f, 0.74f };
	float PastelVioletMagenta[3] = { 0.74f, 0.54f, 0.74f };
	float PastelMagenta[3] = { 0.95f, 0.60f, 0.75f };
	float PastelMagentaRed[3] = { 0.96f, 0.59f, 0.61f };
	float LightRed[3] = { 0.94f, 0.42f, 0.30f };
	float LightRedOrange[3] = { 0.96f, 0.55f, 0.33f };
	float LightYellowOrange[3] = { 0.98f, 0.68f, 0.36f };
	float LightYellow[3] = { 1.0f, 0.96f, 0.40f };
	float LightPeaGreen[3] = { 0.67f, 0.82f, 0.45f };
	float LightYellowGreen[3] = { 0.48f, 0.77f, 0.46f };
	float LightGreen[3] = { 0.23f, 0.72f, 0.47f };
	float LightGreenCyan[3] = { 0.10f, 0.73f, 0.70f };
	float LightCyan[3] = { 0.0f, 0.74f, 0.95f };
	float LightCyanBlue[3] = { 0.26f, 0.54f, 0.79f };
	float LightBlue[3] = { 0.33f, 0.45f, 0.72f };
	float LightBlueViolet[3] = { 0.37f, 0.36f, 0.65f };
	float LightViolet[3] = { 0.52f, 0.37f, 0.65f };
	float LightVioletMagenta[3] = { 0.65f, 0.39f, 0.65f };
	float LightMagenta[3] = { 0.94f, 0.43f, 0.66f };
	float LightMagentaRed[3] = { 0.94f, 0.42f, 0.49f };
	float Red[3] = { 0.92f, 0.10f, 0.14f };
	float RedOrange[3] = { 0.94f, 0.39f, 0.13f };
	float YellowOrange[3] = { 0.96f, 0.58f, 0.11f };
	float Yellow[3] = { 1.0f, 0.94f, 0.0f };
	float PeaGreen[3] = { 0.55f, 0.77f, 0.24f };
	float YellowGreen[3] = { 0.22f, 0.70f, 0.29f };
	float Green[3] = { 0.0f, 0.65f, 0.31f };
	float GreenCyan[3] = { 0.0f, 0.66f, 0.61f };
	float Cyan[3] = { 0.0f, 0.68f, 0.93f };
	float CyanBlue[3] = { 0.0f, 0.44f, 0.34f };
	float Blue[3] = { 0.0f, 0.32f, 0.65f };
	float BlueViolet[3] = { 0.19f, 0.19f, 0.57f };
	float Violet[3] = { 0.18f, 0.19f, 0.57f };
	float VioletMagenta[3] = { 0.57f, 0.15f, 5.63f };
	float Magenta[3] = { 0.92f, 0.0f, 0.54f };
	float MagentaRed[3] = { 0.92f, 0.07f, 0.35f };
	float DarkRed[3] = { 0.61f, 0.04f, 0.05f };
	float DarkROrange[3] = { 0.62f, 0.25f, 0.05f };
	float DarkYellowOrange[3] = { 0.53f, 0.38f, 0.03f };
	float DarkYellow[3] = { 0.67f, 0.62f, 0.0f };
	float DarkPeaGreen[3] = { 0.34f, 0.52f, 0.15f };
	float DarkYellowGreen[3] = { 0.09f, 0.48f, 0.18f };
	float DarkGreen[3] = { 0.0f, 0.44f, 0.21f };
	float DarkGreenCyan[3] = { 0.0f, 0.45f, 0.41f };
	float DarkCyan[3] = { 0.0f, 0.46f, 0.63f };
	float DarkCyanBlue[3] = { 0.0f, 0.29f, 0.50f };
	float DarkBlue[3] = { 0.0f, 0.20f, 0.44f };
	float DarkBlueViolet[3] = { 0.10f, 0.07f, 0.39f };
	float DarkViolet[3] = { 0.26f, 0.05f, 0.38f };
	float DarkVioletMagenta[3] = { 0.38f, 0.01f, 0.37f };
	float DarkMagenta[3] = { 0.61f, 0.0f, 0.36f };
	float DarkMagentaRed[3] = { 0.61f, 0.0f, 0.22f };
	float DarkerRed[3] = { 0.47f, 0.0f, 0.0f };
	float DarkerROrange[3] = { 0.48f, 0.18f, 0.0f };
	float DarkerYellowOrange[3] = { 0.49f, 0.28f, 0.0f };
	float DarkerYellow[3] = { 0.50f, 0.48f, 0.0f };
	float DarkerPeaGreen[3] = { 0.25f, 0.4f, 0.09f };
	float DarkerYellowGreen[3] = { 0.0f, 0.36f, 0.12f };
	float DarkerGreen[3] = { 0.0f, 0.34f, 0.14f };
	float DarkerGreenCyan[3] = { 0.0f, 0.34f, 0.32f };
	float DarkerCyan[3] = { 0.0f, 0.35f, 0.49f };
	float DarkerCyanBlue[3] = { 0.0f, 0.21f, 0.38f };
	float DarkerBlue[3] = { 0.0f, 0.12f, 0.34f };
	float DarkerBlueViolet[3] = { 0.05f, 0.0f, 0.29f };
	float DarkerViolet[3] = { 0.19f, 0.0f, 0.29f };
	float DarkerVioletMagenta[3] = { 0.29f, 0.0f, 0.28f };
	float DarkerMagenta[3] = { 0.48f, 0.0f, 0.27f };
	float DarkerMagentaRed[3] = { 0.47f, 0.27f, 0.14f };
	float PaleCoolBrown[3] = { 0.78f, 0.69f, 0.61f };
	float LightCoolBrown[3] = { 0.6f, 0.52f, 0.45f };
	float MiumCoolBrown[3] = { 0.45f, 0.38f, 0.34f };
	float DarkCoolBrown[3] = { 0.32f, 0.27f, 0.25f };
	float DarkerCoolBrown[3] = { 0.21f, 0.18f, 0.17f };
	float PaleWarmBrown[3] = { 0.77f, 0.61f, 0.43f };
	float LightWarmBrown[3] = { 0.65f, 0.48f, 0.32f };
	float MiumWarmBrown[3] = { 0.54f, 0.38f, 0.22f };
	float DarkWarmBrown[3] = { 0.45f, 0.29f, 0.14f };
	float DarkerWarmBrown[3] = { 0.37f, 0.22f, 0.07f };
	float purple[3] = { 144.00f, 0.00f, 255.00f };
	float white[3] = { 255.00f, 255.00f, 255.00f };
	float Sexycyan[3] = { 0.00f, 229.00f, 250.00f };
	float DarkestRed[3] = { 84.00f, 6.00f, 00.00f };
	float gaygrey[3] = { 150, 150, 150 };
} color;

bool bEnemyClose = false;
int closestEnemyDist = 9999999;

namespace G
{
	// item set ==============================================================

	//Extras (dont work)
	bool EnableHack = true;
	bool StickySilent = false;
	bool Spinbot = true;
	bool Lootesp = false;
	bool ChestESP = false;
	bool FOVChanger = false;
	float FovValue;
	bool traps = false;
	bool RiftEsp = false;
	bool supplydrop = false;
	bool projectile = false;
	bool VehicleEsp = false;
	bool playersweapon = false;
	bool Ultracommon = false;
	bool Common = false;
	bool Uncommon = false;
	bool Rare = false;
	bool Legendary = true;
	bool Nospread;
	bool Nobloom;
	bool PlayerReload;
	bool FirstCamera;
	bool InstantRevive;
	bool MagicBullets;
	bool boattp;
	bool RapidFire;
	bool VehicleFly = false;
	bool VisCheck = true;
	bool BotESP = false;





	//working shit
	int aimkey = VK_RBUTTON;
	int aimkeyint = 1;
	int AimDelay = 0;
	bool InGameRadar = false;

	int hitboxsize = 1;
	float RedDistance = 35.0f;
	float CloseDistance = 10.0f;
	float AssistDistance = 10.0f;

	bool RainbowCursor = false;
	bool RefreshEach1s = false;

	bool OverallDist = true;

	float Active_Tab;
	float Aimbot_Page;
	float Color_Page = 1;
	float Switch_Page;
	float hitbox;
	float aimkeypos;
	float hitboxpos = 2;
	float boneswitch = 2;
	int Aim_Speed = 1;
	float Human_Speed = 10.0;
	float VisDist = 450;
	int AimFOV = 150.0f;
	int opacity = 1;
	float Thick = 1;
	bool Show_Menu = true;
	bool Silent = false;
	bool Insta_Reload = false;
	bool VehicleSpeedHax = false;
	bool Rapid_Fire = false;
	bool Memory = false;
	bool FakeLag = false;
	bool weakspot = false;
	bool llamaesp = false;
	bool LootESP = false;
	bool botcheck = false;
	bool backtrack = false;
	bool Auto_Bone_Switch = false;
	bool Draw_FOV_Circle = true;
	bool Aim_Prediction = false;
	bool Cross_Hair = true;
	bool Crosshair_nazi = false;
	bool Lock_Line = false;
	bool outlineesp = true;
	bool Auto_Fire = false;
	bool SwingBot = false;
	bool ThreeDBox = false;
	bool lobbyesp = true;
	bool offsets = true;
	bool Head = false;
	bool Neck = false;
	bool Chest = true;
	bool Pelvis = false;
	bool Toes = false;
	bool AimWhileJumping = false;


	bool Aimbot = true;
	bool ConstantLock = false;
	bool ControllerAimbot = false;


	bool HumanizedAimbot = false;
	bool Esp_box = false;
	static bool HealthESP = false;
	bool Esp_Corner_Box = false;
	bool ESPToggle = true;
	bool Esp_box_fill = false;
	bool InstantReboot = false;
	bool Esp_Circle = false;
	bool Esp_Circle_Fill;
	bool Triangle_ESP = false;
	bool Triangle_ESP_Filled;
	bool expand_hitbox = false;
	bool Head_dot = true;
	bool Distance_Esp = false;

	bool Esp_line = false;
	bool Esp_lineMiddle = false;
	bool Esp_lineBottom = false;
	bool Snaplines = false;

	bool AutoPickup = false;

	bool Esp_line_top;
	bool Esp_skeleton = false;
	bool PlayerESP = false;
	bool Watermark = true;
	bool Airstuck = false;
	bool fly = false;
	bool saveconfig = false;
	bool loadconfig = false;
	bool SelfEsp = false;
	float DrawFOVCircle[4] = { color.white[0], color.white[1], color.white[2] };
	float Espbox[3] = { color.Red[0], color.Red[1], color.Red[2] };
	float Skeletonchik[3] = { color.white[0], color.white[1], color.white[2] };
	float SkeletonColor[3] = { color.white[0], color.white[1], color.white[2] };
	float BoxCornerESP[3] = { color.white[0], color.white[1], color.white[2] };

	float CloseBoxCornerESP[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };

	float Espboxfill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float EspCircle[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float EspCircleFill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TriangleESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TriangleESPFilled[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float LineESP[3] = { color.gaygrey[0], color.gaygrey[1], color.gaygrey[2] };
	float CrossHair[3] = { color.purple[0], color.purple[1], color.purple[2] };
	float LockLine[3] = { color.Red[0], color.Red[1], color.Red[2] };
	float Thickness = 1.8f;
	float Shape = 50.0f;
	float Transparency = 1.0f;
	float Transparencyy = 1.0f;
	bool Team_Aimbot;
	bool Team_Esp_box;
	bool Team_Esp_Corner_Box;
	bool Team_Esp_box_fill;
	bool Team_Esp_Circle;
	bool Team_Esp_Circle_Fill;
	bool Team_Triangle_ESP;
	bool Team_Triangle_ESP_Filled;
	bool Team_Head_dot;
	bool Team_Distance_Esp = false;
	bool PlayerTeleport = true;
	bool Team_Esp_line;
	float TeamEspbox[3] = { color.Red[0], color.Red[1], color.Red[2] };
	float TeamBoxCornerESP[3] = { color.LightGreen[0], color.LightGreen[1], color.LightGreen[2] };
	float TeamEspboxfill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamEspCircle[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TeamEspCircleFill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamTriangleESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TeamTriangleESPFilled[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamHeaddot[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamLineESP[3] = { color.LightBlue[0], color.LightBlue[1], color.LightBlue[2] };


}



typedef struct
{
	DWORD R;
	DWORD G;
	DWORD B;
	DWORD A;
}RGBA;









