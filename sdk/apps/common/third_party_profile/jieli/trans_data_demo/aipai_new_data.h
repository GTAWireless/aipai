
#include "system/app_core.h"
#include "system/includes.h"

#include "app_config.h"
#include "app_action.h"

#include "btstack/btstack_task.h"
#include "btstack/bluetooth.h"
#include "user_cfg.h"
#include "vm.h"
#include "btcontroller_modules.h"
#include "bt_common.h"
#include "3th_profile_api.h"

#include "le_trans_data.h"
#include "le_common.h"

#include "rcsp_bluetooth.h"
#include "JL_rcsp_api.h"


const u8 user_data[16] = { 0xff,0xff,0xff,0xff,
                            0xff,0xff,0xff,0xff,
                            0xff,0xff,0xff,0xff,
                            0xff,0xff,0xff,0xff};
const u16 jlid = 0x05d6;
const u16 vid = 0xFFFF;
const u16 pid = 0xFFFF;

u8  fw_hash[16] = {0};
u8 ble_mac_addr[6] = {0};
u32 fw_random = 0;
u8 safe_flag = 0; //验证通过标志,为1表示通过
u8 sn = 0;

extern void btcon_hash(unsigned char *pt, int ptlen, unsigned char *key, int keylen, unsigned char *mac);
extern int le_controller_get_mac(void *addr);

