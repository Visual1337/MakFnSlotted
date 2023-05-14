#include "kdmapper.hpp"
#include "driver.h"

/* 

    CREDITS TO THECRUZ FOR UPDATING IT AND THE ORIGINAL KDMAPPER GUY WHO MADE THIS!
	IF YOU NEED HELP https://discord.gg/DAzXhAjd9k

*/

int main()
{
	HANDLE iqvw64e_device_handle = intel_driver::Load();

	if (!iqvw64e_device_handle || iqvw64e_device_handle == INVALID_HANDLE_VALUE)
	{
		std::cout << "[-] Failed to load driver iqvw64e.sys" << std::endl;
		return -1;
	}

	if (!kdmapper::MapDriver(iqvw64e_device_handle, RawData))
	{
		std::cout << "[-] Failed to map driver" << std::endl;
		intel_driver::Unload(iqvw64e_device_handle);
		return -1;
	}

	intel_driver::Unload(iqvw64e_device_handle);
	MessageBoxA(0,"success","nice",0);
}