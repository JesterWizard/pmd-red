#include "global.h"
#include "globaldata.h"
#include "ground_files_table.h"

extern const u8 gFileA01P01[];
extern const u8 gFileA01P01c[];
extern const u8 gFileA01P01m[];
extern const u8 gFileA01P02[];
extern const u8 gFileA02P01[];
extern const u8 gFileA02P01c[];
extern const u8 gFileA02P01m[];
extern const u8 gFileA02P02[];
extern const u8 gFileA02P02c[];
extern const u8 gFileA02P02m[];
extern const u8 gFileA02P03[];
extern const u8 gFileA02P03c[];
extern const u8 gFileA02P03m[];
extern const u8 gFileA02P04[];
extern const u8 gFileA02P04c[];
extern const u8 gFileA02P04m[];
extern const u8 gFileA03P01[];
extern const u8 gFileA03P01c[];
extern const u8 gFileA03P01m[];
extern const u8 gFileA03P02[];
extern const u8 gFileA03P03[];
extern const u8 gFileA03P03c[];
extern const u8 gFileA03P03m[];
extern const u8 gFileA04P01[];
extern const u8 gFileA04P011[];
extern const u8 gFileA04P01c[];
extern const u8 gFileA04P01m[];
extern const u8 gFileA04P02[];
extern const u8 gFileA04P02c[];
extern const u8 gFileA04P02m[];
extern const u8 gFileA04P03[];
extern const u8 gFileA04P03c[];
extern const u8 gFileA04P03m[];
extern const u8 gFileA04P04[];
extern const u8 gFileA04P04c[];
extern const u8 gFileA04P04m[];
extern const u8 gFileA05P01[];
extern const u8 gFileA05P011[];
extern const u8 gFileA05P01c[];
extern const u8 gFileA05P01m[];
extern const u8 gFileA05P02[];
extern const u8 gFileA05P02c[];
extern const u8 gFileA05P02m[];
extern const u8 gFileA05P03[];
extern const u8 gFileA05P03c[];
extern const u8 gFileA05P03m[];
extern const u8 gFileB01P01A[];
extern const u8 gFileB01P01A1[];
extern const u8 gFileB01P01Ac[];
extern const u8 gFileB01P01Am[];
extern const u8 gFileB01P01B[];
extern const u8 gFileB01P01B3[];
extern const u8 gFileB01P01Bc[];
extern const u8 gFileB01P01Bm[];
extern const u8 gFileB01P01C[];
extern const u8 gFileB01P01Cc[];
extern const u8 gFileB01P01Cm[];
extern const u8 gFileB01P02A[];
extern const u8 gFileB01P02Am[];
extern const u8 gFileB01P02Bm[];
extern const u8 gFileB01P02C[];
extern const u8 gFileB01P02Cc[];
extern const u8 gFileB01P02Cm[];
extern const u8 gFileB01P02c[];
extern const u8 gFileB02P01B[];
extern const u8 gFileB02P01B3[];
extern const u8 gFileB02P01C[];
extern const u8 gFileB02P01Cc[];
extern const u8 gFileB02P01Cm[];
extern const u8 gFileB03P01B[];
extern const u8 gFileB03P01B3[];
extern const u8 gFileB03P01C[];
extern const u8 gFileB03P01Cc[];
extern const u8 gFileB03P01Cm[];
extern const u8 gFileB04P01B[];
extern const u8 gFileB04P01B3[];
extern const u8 gFileB04P01C[];
extern const u8 gFileB04P01Cc[];
extern const u8 gFileB04P01Cm[];
extern const u8 gFileB05P01A[];
extern const u8 gFileB05P01Ac[];
extern const u8 gFileB05P01Am[];
extern const u8 gFileB05P01B[];
extern const u8 gFileB05P01B3[];
extern const u8 gFileB05P01Bc[];
extern const u8 gFileB05P01Bm[];
extern const u8 gFileB05P01C[];
extern const u8 gFileB05P01Cc[];
extern const u8 gFileB05P01Cm[];
extern const u8 gFileB05P02A[];
extern const u8 gFileB05P02Am[];
extern const u8 gFileB05P02Bm[];
extern const u8 gFileB05P02C[];
extern const u8 gFileB05P02Cc[];
extern const u8 gFileB05P02Cm[];
extern const u8 gFileB05P02c[];
extern const u8 gFileB06P01B[];
extern const u8 gFileB06P01B3[];
extern const u8 gFileB06P01C[];
extern const u8 gFileB06P01Cc[];
extern const u8 gFileB07P01B[];
extern const u8 gFileB07P01B3[];
extern const u8 gFileB07P01C[];
extern const u8 gFileB07P01Cc[];
extern const u8 gFileB07P01Cm[];
extern const u8 gFileB08P01B[];
extern const u8 gFileB08P01B3[];
extern const u8 gFileB08P01C[];
extern const u8 gFileB08P01Cc[];
extern const u8 gFileB09P01A[];
extern const u8 gFileB09P01A1[];
extern const u8 gFileB09P01Ac[];
extern const u8 gFileB09P01Am[];
extern const u8 gFileB09P01B[];
extern const u8 gFileB09P01B1[];
extern const u8 gFileB09P01B3[];
extern const u8 gFileB09P01Bc[];
extern const u8 gFileB09P01Bm[];
extern const u8 gFileB09P01C[];
extern const u8 gFileB09P01C1[];
extern const u8 gFileB09P01Cc[];
extern const u8 gFileB09P01Cm[];
extern const u8 gFileB09P021[];
extern const u8 gFileB09P02A[];
extern const u8 gFileB09P02Am[];
extern const u8 gFileB09P02Bm[];
extern const u8 gFileB09P02C[];
extern const u8 gFileB09P02C1[];
extern const u8 gFileB09P02Cc[];
extern const u8 gFileB09P02Cm[];
extern const u8 gFileB09P02c[];
extern const u8 gFileB10P01A[];
extern const u8 gFileB10P01B[];
extern const u8 gFileB10P01B3[];
extern const u8 gFileB10P01C[];
extern const u8 gFileB10P01Cc[];
extern const u8 gFileB10P01Cm[];
extern const u8 gFileB11P01B[];
extern const u8 gFileB11P01B3[];
extern const u8 gFileB11P01C[];
extern const u8 gFileB11P01C1[];
extern const u8 gFileB11P01Cc[];
extern const u8 gFileB11P01Cm[];
extern const u8 gFileB12P01A[];
extern const u8 gFileB12P01Ac[];
extern const u8 gFileB12P01Am[];
extern const u8 gFileB12P01B[];
extern const u8 gFileB12P01B3[];
extern const u8 gFileB12P01Bc[];
extern const u8 gFileB12P01Bm[];
extern const u8 gFileB12P01C[];
extern const u8 gFileB12P01Cc[];
extern const u8 gFileB12P01Cm[];
extern const u8 gFileB12P02A[];
extern const u8 gFileB12P02Am[];
extern const u8 gFileB12P02Bm[];
extern const u8 gFileB12P02C[];
extern const u8 gFileB12P02Cc[];
extern const u8 gFileB12P02Cm[];
extern const u8 gFileB12P02c[];
extern const u8 gFileB13P01B[];
extern const u8 gFileB13P01B3[];
extern const u8 gFileB13P01C[];
extern const u8 gFileB13P01Cc[];
extern const u8 gFileB13P01Cm[];
extern const u8 gFileB14P01A[];
extern const u8 gFileB14P01Ac[];
extern const u8 gFileB14P01Am[];
extern const u8 gFileB14P01B[];
extern const u8 gFileB14P01B3[];
extern const u8 gFileB14P01Bc[];
extern const u8 gFileB14P01Bm[];
extern const u8 gFileB14P01C[];
extern const u8 gFileB14P01Cc[];
extern const u8 gFileB14P01Cm[];
extern const u8 gFileB14P02A[];
extern const u8 gFileB14P02Am[];
extern const u8 gFileB14P02Bm[];
extern const u8 gFileB14P02C[];
extern const u8 gFileB14P02Cc[];
extern const u8 gFileB14P02Cm[];
extern const u8 gFileB14P02c[];
extern const u8 gFileB15P01B[];
extern const u8 gFileB15P01B3[];
extern const u8 gFileB15P01C[];
extern const u8 gFileB15P01Cc[];
extern const u8 gFileB15P01Cm[];
extern const u8 gFileB16P01B[];
extern const u8 gFileB16P01B3[];
extern const u8 gFileB16P01C[];
extern const u8 gFileB16P01Cc[];
extern const u8 gFileB16P01Cm[];
extern const u8 gFileD01P01[];
extern const u8 gFileD01P01c[];
extern const u8 gFileD01P01m[];
extern const u8 gFileD01P02[];
extern const u8 gFileD01P02c[];
extern const u8 gFileD01P02m[];
extern const u8 gFileD02P01[];
extern const u8 gFileD02P01c[];
extern const u8 gFileD02P01m[];
extern const u8 gFileD02P02m[];
extern const u8 gFileD03P01[];
extern const u8 gFileD03P01c[];
extern const u8 gFileD03P01m[];
extern const u8 gFileD03P02[];
extern const u8 gFileD03P02c[];
extern const u8 gFileD03P02m[];
extern const u8 gFileD04P01[];
extern const u8 gFileD04P01c[];
extern const u8 gFileD04P01m[];
extern const u8 gFileD04P02[];
extern const u8 gFileD04P02c[];
extern const u8 gFileD04P02m[];
extern const u8 gFileD05P01[];
extern const u8 gFileD05P01c[];
extern const u8 gFileD05P01m[];
extern const u8 gFileD05P02m[];
extern const u8 gFileD06P01[];
extern const u8 gFileD06P01c[];
extern const u8 gFileD06P01m[];
extern const u8 gFileD06P02m[];
extern const u8 gFileD06P03[];
extern const u8 gFileD06P03c[];
extern const u8 gFileD06P03m[];
extern const u8 gFileD07P01[];
extern const u8 gFileD07P01c[];
extern const u8 gFileD07P01m[];
extern const u8 gFileD08P01[];
extern const u8 gFileD08P01c[];
extern const u8 gFileD08P01m[];
extern const u8 gFileD09P01[];
extern const u8 gFileD09P01c[];
extern const u8 gFileD09P01m[];
extern const u8 gFileD09P03[];
extern const u8 gFileD09P03c[];
extern const u8 gFileD09P03m[];
extern const u8 gFileD10P01c[];
extern const u8 gFileD10P01m[];
extern const u8 gFileD10P03[];
extern const u8 gFileD10P03c[];
extern const u8 gFileD10P03m[];
extern const u8 gFileD11P01[];
extern const u8 gFileD11P01c[];
extern const u8 gFileD11P01m[];
extern const u8 gFileD11P03[];
extern const u8 gFileD11P03c[];
extern const u8 gFileD11P03m[];
extern const u8 gFileD12P01[];
extern const u8 gFileD12P01c[];
extern const u8 gFileD12P01m[];
extern const u8 gFileD12P04[];
extern const u8 gFileD12P04c[];
extern const u8 gFileD12P04m[];
extern const u8 gFileD13P01[];
extern const u8 gFileD13P01c[];
extern const u8 gFileD13P01m[];
extern const u8 gFileD13P03[];
extern const u8 gFileD13P03c[];
extern const u8 gFileD13P03m[];
extern const u8 gFileD14P01[];
extern const u8 gFileD14P01c[];
extern const u8 gFileD14P01m[];
extern const u8 gFileD15P01[];
extern const u8 gFileD15P01c[];
extern const u8 gFileD15P01m[];
extern const u8 gFileD16P01m[];
extern const u8 gFileD17P01m[];
extern const u8 gFileD18P01m[];
extern const u8 gFileD19P01[];
extern const u8 gFileD19P01c[];
extern const u8 gFileD19P01m[];
extern const u8 gFileD20P01m[];
extern const u8 gFileD21P01[];
extern const u8 gFileD21P01c[];
extern const u8 gFileD21P01m[];
extern const u8 gFileD22P01[];
extern const u8 gFileD22P01c[];
extern const u8 gFileD22P01m[];
extern const u8 gFileD23P01m[];
extern const u8 gFileD24P01[];
extern const u8 gFileD24P01c[];
extern const u8 gFileD24P01m[];
extern const u8 gFileD24P02[];
extern const u8 gFileD24P02c[];
extern const u8 gFileD24P02m[];
extern const u8 gFileD25P01m[];
extern const u8 gFileH01P01[];
extern const u8 gFileH01P01W[];
extern const u8 gFileH01P01W1[];
extern const u8 gFileH01P01Wc[];
extern const u8 gFileH01P01Wm[];
extern const u8 gFileH01P01c[];
extern const u8 gFileH01P01m[];
extern const u8 gFileH01P02[];
extern const u8 gFileH01P02c[];
extern const u8 gFileH01P02m[];
extern const u8 gFileH01P03[];
extern const u8 gFileH01P03c[];
extern const u8 gFileH01P03m[];
extern const u8 gFileH02P01[];
extern const u8 gFileH02P01W1[];
extern const u8 gFileH02P01Wc[];
extern const u8 gFileH02P01Wm[];
extern const u8 gFileH02P01c[];
extern const u8 gFileH02P01m[];
extern const u8 gFileH02P02[];
extern const u8 gFileH02P02Wc[];
extern const u8 gFileH02P02Wm[];
extern const u8 gFileH02P02c[];
extern const u8 gFileH02P02m[];
extern const u8 gFileH02P03[];
extern const u8 gFileH02P03W[];
extern const u8 gFileH02P03W1[];
extern const u8 gFileH02P03Wc[];
extern const u8 gFileH02P03Wm[];
extern const u8 gFileH02P03c[];
extern const u8 gFileH02P03m[];
extern const u8 gFileH03P01[];
extern const u8 gFileH03P01c[];
extern const u8 gFileH03P01m[];
extern const u8 gFileH04P01[];
extern const u8 gFileH04P01c[];
extern const u8 gFileH04P01m[];
extern const u8 gFileH04P02[];
extern const u8 gFileH04P02c[];
extern const u8 gFileH04P02m[];
extern const u8 gFileH05P01[];
extern const u8 gFileH05P01c[];
extern const u8 gFileH05P01m[];
extern const u8 gFileH05P02[];
extern const u8 gFileH05P02c[];
extern const u8 gFileH05P02m[];
extern const u8 gFileH06P01[];
extern const u8 gFileH06P01c[];
extern const u8 gFileH06P01m[];
extern const u8 gFileH06P02[];
extern const u8 gFileH06P02c[];
extern const u8 gFileH06P02m[];
extern const u8 gFileH06P03[];
extern const u8 gFileH06P03c[];
extern const u8 gFileH06P03m[];
extern const u8 gFileH06P04[];
extern const u8 gFileH06P04c[];
extern const u8 gFileH06P04m[];
extern const u8 gFileH06P05[];
extern const u8 gFileH06P051[];
extern const u8 gFileH06P05c[];
extern const u8 gFileH06P05m[];
extern const u8 gFileH06P06[];
extern const u8 gFileH06P06c[];
extern const u8 gFileH06P06m[];
extern const u8 gFileH07P01[];
extern const u8 gFileH07P01c[];
extern const u8 gFileH07P01m[];
extern const u8 gFileH07P02[];
extern const u8 gFileH07P02c[];
extern const u8 gFileH07P02m[];
extern const u8 gFileH07P03[];
extern const u8 gFileH07P03c[];
extern const u8 gFileH07P03m[];
extern const u8 gFileH07P04[];
extern const u8 gFileH07P04W[];
extern const u8 gFileH07P04W1[];
extern const u8 gFileH07P04Wc[];
extern const u8 gFileH07P04Wm[];
extern const u8 gFileH07P04c[];
extern const u8 gFileH07P04m[];
extern const u8 gFileH07P05[];
extern const u8 gFileH07P05c[];
extern const u8 gFileH07P05m[];
extern const u8 gFileH07P06[];
extern const u8 gFileH07P06c[];
extern const u8 gFileH07P06m[];
extern const u8 gFileH07P07[];
extern const u8 gFileH07P07c[];
extern const u8 gFileH07P07m[];
extern const u8 gFileH07P08[];
extern const u8 gFileH07P08c[];
extern const u8 gFileH07P08m[];
extern const u8 gFileH08P01[];
extern const u8 gFileH08P011[];
extern const u8 gFileH08P01c[];
extern const u8 gFileH08P01m[];
extern const u8 gFileH09P01[];
extern const u8 gFileH09P01c[];
extern const u8 gFileH09P01m[];
extern const u8 gFileH09P02[];
extern const u8 gFileH09P02c[];
extern const u8 gFileH09P02m[];
extern const u8 gFileH10P01[];
extern const u8 gFileH10P01c[];
extern const u8 gFileH10P01m[];
extern const u8 gFileH10P02[];
extern const u8 gFileH10P02c[];
extern const u8 gFileH10P02m[];
extern const u8 gFileH11P01[];
extern const u8 gFileH11P01c[];
extern const u8 gFileH11P01m[];
extern const u8 gFileH12P01[];
extern const u8 gFileH12P011[];
extern const u8 gFileH12P01c[];
extern const u8 gFileH12P01m[];
extern const u8 gFileH13P01[];
extern const u8 gFileH13P011[];
extern const u8 gFileH13P01c[];
extern const u8 gFileH13P01m[];
extern const u8 gFileH13P02[];
extern const u8 gFileH13P02c[];
extern const u8 gFileH13P02m[];
extern const u8 gFileH13P03[];
extern const u8 gFileH13P03c[];
extern const u8 gFileH13P03m[];
extern const u8 gFileH13P04[];
extern const u8 gFileH13P04c[];
extern const u8 gFileH13P04m[];
extern const u8 gFileH14P01[];
extern const u8 gFileH14P01c[];
extern const u8 gFileH14P01m[];
extern const u8 gFileH15P01[];
extern const u8 gFileH15P01c[];
extern const u8 gFileH15P01m[];
extern const u8 gFileH16P01[];
extern const u8 gFileH16P01c[];
extern const u8 gFileH16P01m[];
extern const u8 gFileH17P01[];
extern const u8 gFileH17P01W[];
extern const u8 gFileH17P01W1[];
extern const u8 gFileH17P01Wc[];
extern const u8 gFileH17P01Wm[];
extern const u8 gFileH17P01c[];
extern const u8 gFileH17P01m[];
extern const u8 gFileH18P01[];
extern const u8 gFileH18P011[];
extern const u8 gFileH18P01c[];
extern const u8 gFileH18P01m[];
extern const u8 gFileH19P01[];
extern const u8 gFileH19P011[];
extern const u8 gFileH19P01W[];
extern const u8 gFileH19P01Wc[];
extern const u8 gFileH19P01Wm[];
extern const u8 gFileH19P01c[];
extern const u8 gFileH19P01m[];
extern const u8 gFileH20P01[];
extern const u8 gFileH20P01c[];
extern const u8 gFileH20P01m[];
extern const u8 gFileH21P01[];
extern const u8 gFileH21P01m[];
extern const u8 gFileH21P02[];
extern const u8 gFileH21P02m[];
extern const u8 gFileH21c[];
extern const u8 gFileH22P01[];
extern const u8 gFileH22P01c[];
extern const u8 gFileH22P01m[];
extern const u8 gFileH23P01[];
extern const u8 gFileH23P011[];
extern const u8 gFileH23P01c[];
extern const u8 gFileH23P01m[];
extern const u8 gFileH24P01[];
extern const u8 gFileH24P01c[];
extern const u8 gFileH24P01m[];
extern const u8 gFileH25P01[];
extern const u8 gFileH25P01c[];
extern const u8 gFileH25P01m[];
extern const u8 gFileH26P01[];
extern const u8 gFileH26P01c[];
extern const u8 gFileH26P01m[];
extern const u8 gFileH27P01[];
extern const u8 gFileH27P01c[];
extern const u8 gFileH27P01m[];
extern const u8 gFileH28P01[];
extern const u8 gFileH28P01c[];
extern const u8 gFileH28P01m[];
extern const u8 gFileH28P02[];
extern const u8 gFileH28P02c[];
extern const u8 gFileH28P02m[];
extern const u8 gFileH29P01[];
extern const u8 gFileH29P01c[];
extern const u8 gFileH29P01m[];
extern const u8 gFileH29P02[];
extern const u8 gFileH29P021[];
extern const u8 gFileH29P02c[];
extern const u8 gFileH29P02m[];
extern const u8 gFileH29P03[];
extern const u8 gFileH29P03W[];
extern const u8 gFileH29P03Wc[];
extern const u8 gFileH29P03Wm[];
extern const u8 gFileH29P03c[];
extern const u8 gFileH29P03m[];
extern const u8 gFileH29P04[];
extern const u8 gFileH29P04c[];
extern const u8 gFileH29P04m[];
extern const u8 gFileS01[];
extern const u8 gFileS02[];
extern const u8 gFileS02c[];
extern const u8 gFileS02m[];
extern const u8 gFileS03[];
extern const u8 gFileS03c[];
extern const u8 gFileS03m[];
extern const u8 gFileS04[];
extern const u8 gFileS04c[];
extern const u8 gFileS04m[];
extern const u8 gFileS05[];
extern const u8 gFileS05c[];
extern const u8 gFileS05m[];
extern const u8 gFileS06[];
extern const u8 gFileS06c[];
extern const u8 gFileS06m[];
extern const u8 gFileT00P01[];
extern const u8 gFileT00P01c[];
extern const u8 gFileT00P01m[];
extern const u8 gFileT01P01[];
extern const u8 gFileT01P011[];
extern const u8 gFileT01P01c[];
extern const u8 gFileT01P01m[];
extern const u8 gFileT01P021[];
extern const u8 gFileT01P02A[];
extern const u8 gFileT01P02Am[];
extern const u8 gFileT01P02Bm[];
extern const u8 gFileT01P02c[];
extern const u8 gFileT01P03[];
extern const u8 gFileT01P031[];
extern const u8 gFileT01P03c[];
extern const u8 gFileT01P03m[];
extern const u8 gFileT01P04[];
extern const u8 gFileT01P04c[];
extern const u8 gFileT01P04m[];
extern const u8 gFileT01P05[];
extern const u8 gFileT01P05c[];
extern const u8 gFileT01P05m[];
extern const u8 gFileT01P06[];
extern const u8 gFileT01P06c[];
extern const u8 gFileT01P06m[];
extern const u8 gFileT01P07[];
extern const u8 gFileT01P07W[];
extern const u8 gFileT01P07Wc[];
extern const u8 gFileT01P07Wm[];
extern const u8 gFileT01P07c[];
extern const u8 gFileT01P07m[];
extern const u8 gFileT01P08[];
extern const u8 gFileT01P08c[];
extern const u8 gFileT01P08m[];
extern const u8 gFileW01[];
extern const u8 gFileW01c[];
extern const u8 gFileW01m[];
extern const u8 gFileW03P01[];
extern const u8 gFileW03P011[];
extern const u8 gFileW03P01c[];
extern const u8 gFileW03P01m[];
extern const u8 gFileW03P021[];
extern const u8 gFileW03P031[];
extern const u8 gFileW03P03c[];
extern const u8 gFileW03P03m[];
extern const u8 gFileW04[];
extern const u8 gFileW041[];
extern const u8 gFileW04c[];
extern const u8 gFileW04m[];
extern const u8 gFileW05[];
extern const u8 gFileW05c[];
extern const u8 gFileW05m[];
extern const u8 gFileW06[];
extern const u8 gFileW06c[];
extern const u8 gFileW06m[];

#ifdef SKY_STORY
extern const u8 gFileED0111A[];
extern const u8 gFileED0111Ac[];
extern const u8 gFileED0111Am[];
extern const u8 gFileED0111B[];
extern const u8 gFileED0111Bc[];
extern const u8 gFileED0111Bm[];
extern const u8 gFileED0141A[];
extern const u8 gFileED0141Ac[];
extern const u8 gFileED0141Am[];
extern const u8 gFileEG0101B[];
extern const u8 gFileEG0101Bc[];
extern const u8 gFileEG0101Bm[];
extern const u8 gFileEG0101B1[];
extern const u8 gFileEV0101A[];
extern const u8 gFileEV0101Ac[];
extern const u8 gFileEV0101Am[];
extern const u8 gFileEV0101A1[];
extern const u8 gFileEV0104B[];
extern const u8 gFileEV0104Bc[];
extern const u8 gFileEV0104Bm[];
extern const u8 gFileEV0105B[];
extern const u8 gFileEV0105Bc[];
extern const u8 gFileEV0105Bm[];
extern const u8 gFileEV0107B[];
extern const u8 gFileEV0107Bc[];
extern const u8 gFileEV0107Bm[];
#endif

const File gGroundFiles[GROUND_FILES_COUNT] = {
#ifdef SKY_STORY
    [0] = { "A01P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [0] = { "A01P01", &gFileA01P01, },
#endif
    [1] = { "A01P01c", &gFileA01P01c, },
    [2] = { "A01P01m", &gFileA01P01m, },
#ifdef SKY_STORY
    [3] = { "A01P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [3] = { "A01P02", &gFileA01P02, },
#endif
#ifdef SKY_STORY
    [4] = { "A02P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [4] = { "A02P01", &gFileA02P01, },
#endif
#ifdef SKY_STORY
    [5] = { "A02P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [5] = { "A02P01c", &gFileA02P01c, },
#endif
#ifdef SKY_STORY
    [6] = { "A02P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [6] = { "A02P01m", &gFileA02P01m, },
#endif
#ifdef SKY_STORY
    [7] = { "A02P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [7] = { "A02P02", &gFileA02P02, },
#endif
#ifdef SKY_STORY
    [8] = { "A02P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [8] = { "A02P02c", &gFileA02P02c, },
#endif
#ifdef SKY_STORY
    [9] = { "A02P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [9] = { "A02P02m", &gFileA02P02m, },
#endif
#ifdef SKY_STORY
    [10] = { "A02P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [10] = { "A02P03", &gFileA02P03, },
#endif
#ifdef SKY_STORY
    [11] = { "A02P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [11] = { "A02P03c", &gFileA02P03c, },
#endif
#ifdef SKY_STORY
    [12] = { "A02P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [12] = { "A02P03m", &gFileA02P03m, },
#endif
#ifdef SKY_STORY
    [13] = { "A02P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [13] = { "A02P04", &gFileA02P04, },
#endif
#ifdef SKY_STORY
    [14] = { "A02P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [14] = { "A02P04c", &gFileA02P04c, },
#endif
#ifdef SKY_STORY
    [15] = { "A02P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [15] = { "A02P04m", &gFileA02P04m, },
#endif
#ifdef SKY_STORY
    [16] = { "A03P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [16] = { "A03P01", &gFileA03P01, },
#endif
#ifdef SKY_STORY
    [17] = { "A03P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [17] = { "A03P01c", &gFileA03P01c, },
#endif
#ifdef SKY_STORY
    [18] = { "A03P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [18] = { "A03P01m", &gFileA03P01m, },
#endif
#ifdef SKY_STORY
    [19] = { "A03P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [19] = { "A03P02", &gFileA03P02, },
#endif
#ifdef SKY_STORY
    [20] = { "A03P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [20] = { "A03P03", &gFileA03P03, },
#endif
#ifdef SKY_STORY
    [21] = { "A03P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [21] = { "A03P03c", &gFileA03P03c, },
#endif
#ifdef SKY_STORY
    [22] = { "A03P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [22] = { "A03P03m", &gFileA03P03m, },
#endif
#ifdef SKY_STORY
    [23] = { "A04P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [23] = { "A04P01", &gFileA04P01, },
#endif
#ifdef SKY_STORY
    [24] = { "A04P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [24] = { "A04P011", &gFileA04P011, },
#endif
#ifdef SKY_STORY
    [25] = { "A04P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [25] = { "A04P01c", &gFileA04P01c, },
#endif
#ifdef SKY_STORY
    [26] = { "A04P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [26] = { "A04P01m", &gFileA04P01m, },
#endif
#ifdef SKY_STORY
    [27] = { "A04P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [27] = { "A04P02", &gFileA04P02, },
#endif
#ifdef SKY_STORY
    [28] = { "A04P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [28] = { "A04P02c", &gFileA04P02c, },
#endif
#ifdef SKY_STORY
    [29] = { "A04P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [29] = { "A04P02m", &gFileA04P02m, },
#endif
#ifdef SKY_STORY
    [30] = { "A04P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [30] = { "A04P03", &gFileA04P03, },
#endif
#ifdef SKY_STORY
    [31] = { "A04P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [31] = { "A04P03c", &gFileA04P03c, },
#endif
#ifdef SKY_STORY
    [32] = { "A04P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [32] = { "A04P03m", &gFileA04P03m, },
#endif
#ifdef SKY_STORY
    [33] = { "A04P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [33] = { "A04P04", &gFileA04P04, },
#endif
#ifdef SKY_STORY
    [34] = { "A04P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [34] = { "A04P04c", &gFileA04P04c, },
#endif
#ifdef SKY_STORY
    [35] = { "A04P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [35] = { "A04P04m", &gFileA04P04m, },
#endif
#ifdef SKY_STORY
    [36] = { "A05P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [36] = { "A05P01", &gFileA05P01, },
#endif
#ifdef SKY_STORY
    [37] = { "A05P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [37] = { "A05P011", &gFileA05P011, },
#endif
#ifdef SKY_STORY
    [38] = { "A05P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [38] = { "A05P01c", &gFileA05P01c, },
#endif
#ifdef SKY_STORY
    [39] = { "A05P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [39] = { "A05P01m", &gFileA05P01m, },
#endif
#ifdef SKY_STORY
    [40] = { "A05P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [40] = { "A05P02", &gFileA05P02, },
#endif
#ifdef SKY_STORY
    [41] = { "A05P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [41] = { "A05P02c", &gFileA05P02c, },
#endif
#ifdef SKY_STORY
    [42] = { "A05P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [42] = { "A05P02m", &gFileA05P02m, },
#endif
#ifdef SKY_STORY
    [43] = { "A05P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [43] = { "A05P03", &gFileA05P03, },
#endif
#ifdef SKY_STORY
    [44] = { "A05P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [44] = { "A05P03c", &gFileA05P03c, },
#endif
#ifdef SKY_STORY
    [45] = { "A05P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [45] = { "A05P03m", &gFileA05P03m, },
#endif
#ifdef SKY_STORY
    [46] = { "B01P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [46] = { "B01P01A", &gFileB01P01A, },
#endif
#ifdef SKY_STORY
    [47] = { "B01P01A1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [47] = { "B01P01A1", &gFileB01P01A1, },
#endif
#ifdef SKY_STORY
    [48] = { "B01P01Ac", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [48] = { "B01P01Ac", &gFileB01P01Ac, },
#endif
#ifdef SKY_STORY
    [49] = { "B01P01Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [49] = { "B01P01Am", &gFileB01P01Am, },
#endif
#ifdef SKY_STORY
    [50] = { "B01P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [50] = { "B01P01B", &gFileB01P01B, },
#endif
#ifdef SKY_STORY
    [51] = { "B01P01B1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [51] = { "B01P01B1", &gFileB01P01A1, }, /* alias: data/map_bg/B01P01B1.bpa */
#endif
#ifdef SKY_STORY
    [52] = { "B01P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [52] = { "B01P01B3", &gFileB01P01B3, },
#endif
#ifdef SKY_STORY
    [53] = { "B01P01Bc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [53] = { "B01P01Bc", &gFileB01P01Bc, },
#endif
#ifdef SKY_STORY
    [54] = { "B01P01Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [54] = { "B01P01Bm", &gFileB01P01Bm, },
#endif
#ifdef SKY_STORY
    [55] = { "B01P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [55] = { "B01P01C", &gFileB01P01C, },
#endif
#ifdef SKY_STORY
    [56] = { "B01P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [56] = { "B01P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B01P01C1.bpa */
#endif
#ifdef SKY_STORY
    [57] = { "B01P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [57] = { "B01P01Cc", &gFileB01P01Cc, },
#endif
#ifdef SKY_STORY
    [58] = { "B01P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [58] = { "B01P01Cm", &gFileB01P01Cm, },
#endif
#ifdef SKY_STORY
    [59] = { "B01P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [59] = { "B01P02A", &gFileB01P02A, },
#endif
#ifdef SKY_STORY
    [60] = { "B01P02Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [60] = { "B01P02Am", &gFileB01P02Am, },
#endif
#ifdef SKY_STORY
    [61] = { "B01P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [61] = { "B01P02B", &gFileB01P02A, }, /* alias: data/map_bg/B01P02B.bpl */
#endif
#ifdef SKY_STORY
    [62] = { "B01P02Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [62] = { "B01P02Bm", &gFileB01P02Bm, },
#endif
#ifdef SKY_STORY
    [63] = { "B01P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [63] = { "B01P02C", &gFileB01P02C, },
#endif
#ifdef SKY_STORY
    [64] = { "B01P02Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [64] = { "B01P02Cc", &gFileB01P02Cc, },
#endif
#ifdef SKY_STORY
    [65] = { "B01P02Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [65] = { "B01P02Cm", &gFileB01P02Cm, },
#endif
#ifdef SKY_STORY
    [66] = { "B01P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [66] = { "B01P02c", &gFileB01P02c, },
#endif
#ifdef SKY_STORY
    [67] = { "B02P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [67] = { "B02P01A", &gFileB01P01A, }, /* alias: data/map_bg/B02P01A.bpl */
#endif
#ifdef SKY_STORY
    [68] = { "B02P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [68] = { "B02P01B", &gFileB02P01B, },
#endif
#ifdef SKY_STORY
    [69] = { "B02P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [69] = { "B02P01B3", &gFileB02P01B3, },
#endif
#ifdef SKY_STORY
    [70] = { "B02P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [70] = { "B02P01C", &gFileB02P01C, },
#endif
#ifdef SKY_STORY
    [71] = { "B02P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [71] = { "B02P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B02P01C1.bpa */
#endif
#ifdef SKY_STORY
    [72] = { "B02P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [72] = { "B02P01Cc", &gFileB02P01Cc, },
#endif
#ifdef SKY_STORY
    [73] = { "B02P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [73] = { "B02P01Cm", &gFileB02P01Cm, },
#endif
#ifdef SKY_STORY
    [74] = { "B02P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [74] = { "B02P02A", &gFileB01P02A, }, /* alias: data/map_bg/B02P02A.bpl */
#endif
#ifdef SKY_STORY
    [75] = { "B02P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [75] = { "B02P02B", &gFileB01P02A, }, /* alias: data/map_bg/B02P02B.bpl */
#endif
#ifdef SKY_STORY
    [76] = { "B02P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [76] = { "B02P02C", &gFileB01P02C, }, /* alias: data/map_bg/B02P02C.bpl */
#endif
#ifdef SKY_STORY
    [77] = { "B03P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [77] = { "B03P01A", &gFileB01P01A, }, /* alias: data/map_bg/B03P01A.bpl */
#endif
#ifdef SKY_STORY
    [78] = { "B03P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [78] = { "B03P01B", &gFileB03P01B, },
#endif
#ifdef SKY_STORY
    [79] = { "B03P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [79] = { "B03P01B3", &gFileB03P01B3, },
#endif
#ifdef SKY_STORY
    [80] = { "B03P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [80] = { "B03P01C", &gFileB03P01C, },
#endif
#ifdef SKY_STORY
    [81] = { "B03P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [81] = { "B03P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B03P01C1.bpa */
#endif
#ifdef SKY_STORY
    [82] = { "B03P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [82] = { "B03P01Cc", &gFileB03P01Cc, },
#endif
#ifdef SKY_STORY
    [83] = { "B03P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [83] = { "B03P01Cm", &gFileB03P01Cm, },
#endif
#ifdef SKY_STORY
    [84] = { "B03P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [84] = { "B03P02A", &gFileB01P02A, }, /* alias: data/map_bg/B03P02A.bpl */
#endif
#ifdef SKY_STORY
    [85] = { "B03P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [85] = { "B03P02B", &gFileB01P02A, }, /* alias: data/map_bg/B03P02B.bpl */
#endif
#ifdef SKY_STORY
    [86] = { "B03P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [86] = { "B03P02C", &gFileB01P02C, }, /* alias: data/map_bg/B03P02C.bpl */
#endif
#ifdef SKY_STORY
    [87] = { "B04P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [87] = { "B04P01A", &gFileB01P01A, }, /* alias: data/map_bg/B04P01A.bpl */
#endif
#ifdef SKY_STORY
    [88] = { "B04P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [88] = { "B04P01B", &gFileB04P01B, },
#endif
#ifdef SKY_STORY
    [89] = { "B04P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [89] = { "B04P01B3", &gFileB04P01B3, },
#endif
#ifdef SKY_STORY
    [90] = { "B04P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [90] = { "B04P01C", &gFileB04P01C, },
#endif
#ifdef SKY_STORY
    [91] = { "B04P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [91] = { "B04P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B04P01C1.bpa */
#endif
#ifdef SKY_STORY
    [92] = { "B04P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [92] = { "B04P01Cc", &gFileB04P01Cc, },
#endif
#ifdef SKY_STORY
    [93] = { "B04P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [93] = { "B04P01Cm", &gFileB04P01Cm, },
#endif
#ifdef SKY_STORY
    [94] = { "B04P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [94] = { "B04P02A", &gFileB01P02A, }, /* alias: data/map_bg/B04P02A.bpl */
#endif
#ifdef SKY_STORY
    [95] = { "B04P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [95] = { "B04P02B", &gFileB01P02A, }, /* alias: data/map_bg/B04P02B.bpl */
#endif
#ifdef SKY_STORY
    [96] = { "B04P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [96] = { "B04P02C", &gFileB01P02C, }, /* alias: data/map_bg/B04P02C.bpl */
#endif
#ifdef SKY_STORY
    [97] = { "B05P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [97] = { "B05P01A", &gFileB05P01A, },
#endif
#ifdef SKY_STORY
    [98] = { "B05P01A1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [98] = { "B05P01A1", &gFileB01P01A1, }, /* alias: data/map_bg/B05P01A1.bpa */
#endif
#ifdef SKY_STORY
    [99] = { "B05P01Ac", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [99] = { "B05P01Ac", &gFileB05P01Ac, },
#endif
#ifdef SKY_STORY
    [100] = { "B05P01Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [100] = { "B05P01Am", &gFileB05P01Am, },
#endif
#ifdef SKY_STORY
    [101] = { "B05P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [101] = { "B05P01B", &gFileB05P01B, },
#endif
#ifdef SKY_STORY
    [102] = { "B05P01B1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [102] = { "B05P01B1", &gFileB01P01A1, }, /* alias: data/map_bg/B05P01B1.bpa */
#endif
#ifdef SKY_STORY
    [103] = { "B05P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [103] = { "B05P01B3", &gFileB05P01B3, },
#endif
#ifdef SKY_STORY
    [104] = { "B05P01Bc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [104] = { "B05P01Bc", &gFileB05P01Bc, },
#endif
#ifdef SKY_STORY
    [105] = { "B05P01Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [105] = { "B05P01Bm", &gFileB05P01Bm, },
#endif
#ifdef SKY_STORY
    [106] = { "B05P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [106] = { "B05P01C", &gFileB05P01C, },
#endif
#ifdef SKY_STORY
    [107] = { "B05P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [107] = { "B05P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B05P01C1.bpa */
#endif
#ifdef SKY_STORY
    [108] = { "B05P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [108] = { "B05P01Cc", &gFileB05P01Cc, },
#endif
#ifdef SKY_STORY
    [109] = { "B05P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [109] = { "B05P01Cm", &gFileB05P01Cm, },
#endif
#ifdef SKY_STORY
    [110] = { "B05P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [110] = { "B05P02A", &gFileB05P02A, },
#endif
#ifdef SKY_STORY
    [111] = { "B05P02Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [111] = { "B05P02Am", &gFileB05P02Am, },
#endif
#ifdef SKY_STORY
    [112] = { "B05P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [112] = { "B05P02B", &gFileB05P02A, }, /* alias: data/map_bg/B05P02B.bpl */
#endif
#ifdef SKY_STORY
    [113] = { "B05P02Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [113] = { "B05P02Bm", &gFileB05P02Bm, },
#endif
#ifdef SKY_STORY
    [114] = { "B05P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [114] = { "B05P02C", &gFileB05P02C, },
#endif
#ifdef SKY_STORY
    [115] = { "B05P02Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [115] = { "B05P02Cc", &gFileB05P02Cc, },
#endif
#ifdef SKY_STORY
    [116] = { "B05P02Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [116] = { "B05P02Cm", &gFileB05P02Cm, },
#endif
#ifdef SKY_STORY
    [117] = { "B05P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [117] = { "B05P02c", &gFileB05P02c, },
#endif
#ifdef SKY_STORY
    [118] = { "B06P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [118] = { "B06P01A", &gFileB05P01A, }, /* alias: data/map_bg/B06P01A.bpl */
#endif
#ifdef SKY_STORY
    [119] = { "B06P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [119] = { "B06P01B", &gFileB06P01B, },
#endif
#ifdef SKY_STORY
    [120] = { "B06P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [120] = { "B06P01B3", &gFileB06P01B3, },
#endif
#ifdef SKY_STORY
    [121] = { "B06P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [121] = { "B06P01C", &gFileB06P01C, },
#endif
#ifdef SKY_STORY
    [122] = { "B06P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [122] = { "B06P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B06P01C1.bpa */
#endif
#ifdef SKY_STORY
    [123] = { "B06P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [123] = { "B06P01Cc", &gFileB06P01Cc, },
#endif
#ifdef SKY_STORY
    [124] = { "B06P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [124] = { "B06P01Cm", &gFileB05P01Cm, }, /* alias: data/map_bg_lz/B06P01Cm.bma.lz */
#endif
#ifdef SKY_STORY
    [125] = { "B06P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [125] = { "B06P02A", &gFileB05P02A, }, /* alias: data/map_bg/B06P02A.bpl */
#endif
#ifdef SKY_STORY
    [126] = { "B06P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [126] = { "B06P02B", &gFileB05P02A, }, /* alias: data/map_bg/B06P02B.bpl */
#endif
#ifdef SKY_STORY
    [127] = { "B06P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [127] = { "B06P02C", &gFileB05P02C, }, /* alias: data/map_bg/B06P02C.bpl */
#endif
#ifdef SKY_STORY
    [128] = { "B07P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [128] = { "B07P01A", &gFileB05P01A, }, /* alias: data/map_bg/B07P01A.bpl */
#endif
#ifdef SKY_STORY
    [129] = { "B07P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [129] = { "B07P01B", &gFileB07P01B, },
#endif
#ifdef SKY_STORY
    [130] = { "B07P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [130] = { "B07P01B3", &gFileB07P01B3, },
#endif
#ifdef SKY_STORY
    [131] = { "B07P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [131] = { "B07P01C", &gFileB07P01C, },
#endif
#ifdef SKY_STORY
    [132] = { "B07P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [132] = { "B07P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B07P01C1.bpa */
#endif
#ifdef SKY_STORY
    [133] = { "B07P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [133] = { "B07P01Cc", &gFileB07P01Cc, },
#endif
#ifdef SKY_STORY
    [134] = { "B07P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [134] = { "B07P01Cm", &gFileB07P01Cm, },
#endif
#ifdef SKY_STORY
    [135] = { "B07P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [135] = { "B07P02A", &gFileB05P02A, }, /* alias: data/map_bg/B07P02A.bpl */
#endif
#ifdef SKY_STORY
    [136] = { "B07P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [136] = { "B07P02B", &gFileB05P02A, }, /* alias: data/map_bg/B07P02B.bpl */
#endif
#ifdef SKY_STORY
    [137] = { "B07P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [137] = { "B07P02C", &gFileB05P02C, }, /* alias: data/map_bg/B07P02C.bpl */
#endif
#ifdef SKY_STORY
    [138] = { "B08P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [138] = { "B08P01A", &gFileB05P01A, }, /* alias: data/map_bg/B08P01A.bpl */
#endif
#ifdef SKY_STORY
    [139] = { "B08P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [139] = { "B08P01B", &gFileB08P01B, },
#endif
#ifdef SKY_STORY
    [140] = { "B08P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [140] = { "B08P01B3", &gFileB08P01B3, },
#endif
#ifdef SKY_STORY
    [141] = { "B08P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [141] = { "B08P01C", &gFileB08P01C, },
#endif
#ifdef SKY_STORY
    [142] = { "B08P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [142] = { "B08P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B08P01C1.bpa */
#endif
#ifdef SKY_STORY
    [143] = { "B08P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [143] = { "B08P01Cc", &gFileB08P01Cc, },
#endif
#ifdef SKY_STORY
    [144] = { "B08P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [144] = { "B08P01Cm", &gFileB07P01Cm, }, /* alias: data/map_bg_lz/B08P01Cm.bma.lz */
#endif
#ifdef SKY_STORY
    [145] = { "B08P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [145] = { "B08P02A", &gFileB05P02A, }, /* alias: data/map_bg/B08P02A.bpl */
#endif
#ifdef SKY_STORY
    [146] = { "B08P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [146] = { "B08P02B", &gFileB05P02A, }, /* alias: data/map_bg/B08P02B.bpl */
#endif
#ifdef SKY_STORY
    [147] = { "B08P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [147] = { "B08P02C", &gFileB05P02C, }, /* alias: data/map_bg/B08P02C.bpl */
#endif
#ifdef SKY_STORY
    [148] = { "B09P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [148] = { "B09P01A", &gFileB09P01A, },
#endif
#ifdef SKY_STORY
    [149] = { "B09P01A1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [149] = { "B09P01A1", &gFileB09P01A1, },
#endif
#ifdef SKY_STORY
    [150] = { "B09P01Ac", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [150] = { "B09P01Ac", &gFileB09P01Ac, },
#endif
#ifdef SKY_STORY
    [151] = { "B09P01Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [151] = { "B09P01Am", &gFileB09P01Am, },
#endif
#ifdef SKY_STORY
    [152] = { "B09P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [152] = { "B09P01B", &gFileB09P01B, },
#endif
#ifdef SKY_STORY
    [153] = { "B09P01B1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [153] = { "B09P01B1", &gFileB09P01B1, },
#endif
#ifdef SKY_STORY
    [154] = { "B09P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [154] = { "B09P01B3", &gFileB09P01B3, },
#endif
#ifdef SKY_STORY
    [155] = { "B09P01Bc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [155] = { "B09P01Bc", &gFileB09P01Bc, },
#endif
#ifdef SKY_STORY
    [156] = { "B09P01Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [156] = { "B09P01Bm", &gFileB09P01Bm, },
#endif
#ifdef SKY_STORY
    [157] = { "B09P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [157] = { "B09P01C", &gFileB09P01C, },
#endif
#ifdef SKY_STORY
    [158] = { "B09P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [158] = { "B09P01C1", &gFileB09P01C1, },
#endif
#ifdef SKY_STORY
    [159] = { "B09P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [159] = { "B09P01Cc", &gFileB09P01Cc, },
#endif
#ifdef SKY_STORY
    [160] = { "B09P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [160] = { "B09P01Cm", &gFileB09P01Cm, },
#endif
#ifdef SKY_STORY
    [161] = { "B09P021", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [161] = { "B09P021", &gFileB09P021, },
#endif
#ifdef SKY_STORY
    [162] = { "B09P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [162] = { "B09P02A", &gFileB09P02A, },
#endif
#ifdef SKY_STORY
    [163] = { "B09P02Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [163] = { "B09P02Am", &gFileB09P02Am, },
#endif
#ifdef SKY_STORY
    [164] = { "B09P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [164] = { "B09P02B", &gFileB09P02A, }, /* alias: data/map_bg/B09P02B.bpl */
#endif
#ifdef SKY_STORY
    [165] = { "B09P02Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [165] = { "B09P02Bm", &gFileB09P02Bm, },
#endif
#ifdef SKY_STORY
    [166] = { "B09P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [166] = { "B09P02C", &gFileB09P02C, },
#endif
#ifdef SKY_STORY
    [167] = { "B09P02C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [167] = { "B09P02C1", &gFileB09P02C1, },
#endif
#ifdef SKY_STORY
    [168] = { "B09P02Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [168] = { "B09P02Cc", &gFileB09P02Cc, },
#endif
#ifdef SKY_STORY
    [169] = { "B09P02Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [169] = { "B09P02Cm", &gFileB09P02Cm, },
#endif
#ifdef SKY_STORY
    [170] = { "B09P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [170] = { "B09P02c", &gFileB09P02c, },
#endif
#ifdef SKY_STORY
    [171] = { "B10P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [171] = { "B10P01A", &gFileB10P01A, },
#endif
#ifdef SKY_STORY
    [172] = { "B10P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [172] = { "B10P01B", &gFileB10P01B, },
#endif
#ifdef SKY_STORY
    [173] = { "B10P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [173] = { "B10P01B3", &gFileB10P01B3, },
#endif
#ifdef SKY_STORY
    [174] = { "B10P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [174] = { "B10P01C", &gFileB10P01C, },
#endif
#ifdef SKY_STORY
    [175] = { "B10P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [175] = { "B10P01C1", &gFileB09P01B1, }, /* alias: data/map_bg/B10P01C1.bpa */
#endif
#ifdef SKY_STORY
    [176] = { "B10P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [176] = { "B10P01Cc", &gFileB10P01Cc, },
#endif
#ifdef SKY_STORY
    [177] = { "B10P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [177] = { "B10P01Cm", &gFileB10P01Cm, },
#endif
#ifdef SKY_STORY
    [178] = { "B10P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [178] = { "B10P02A", &gFileB09P02A, }, /* alias: data/map_bg/B10P02A.bpl */
#endif
#ifdef SKY_STORY
    [179] = { "B10P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [179] = { "B10P02B", &gFileB09P02A, }, /* alias: data/map_bg/B10P02B.bpl */
#endif
#ifdef SKY_STORY
    [180] = { "B10P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [180] = { "B10P02C", &gFileB09P02C, }, /* alias: data/map_bg/B10P02C.bpl */
#endif
#ifdef SKY_STORY
    [181] = { "B11P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [181] = { "B11P01A", &gFileB10P01A, }, /* alias: data/map_bg/B11P01A.bpl */
#endif
#ifdef SKY_STORY
    [182] = { "B11P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [182] = { "B11P01B", &gFileB11P01B, },
#endif
#ifdef SKY_STORY
    [183] = { "B11P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [183] = { "B11P01B3", &gFileB11P01B3, },
#endif
#ifdef SKY_STORY
    [184] = { "B11P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [184] = { "B11P01C", &gFileB11P01C, },
#endif
#ifdef SKY_STORY
    [185] = { "B11P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [185] = { "B11P01C1", &gFileB11P01C1, },
#endif
#ifdef SKY_STORY
    [186] = { "B11P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [186] = { "B11P01Cc", &gFileB11P01Cc, },
#endif
#ifdef SKY_STORY
    [187] = { "B11P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [187] = { "B11P01Cm", &gFileB11P01Cm, },
#endif
#ifdef SKY_STORY
    [188] = { "B11P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [188] = { "B11P02A", &gFileB09P02A, }, /* alias: data/map_bg/B11P02A.bpl */
#endif
#ifdef SKY_STORY
    [189] = { "B11P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [189] = { "B11P02B", &gFileB09P02A, }, /* alias: data/map_bg/B11P02B.bpl */
#endif
#ifdef SKY_STORY
    [190] = { "B11P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [190] = { "B11P02C", &gFileB09P02C, }, /* alias: data/map_bg/B11P02C.bpl */
#endif
#ifdef SKY_STORY
    [191] = { "B12P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [191] = { "B12P01A", &gFileB12P01A, },
#endif
#ifdef SKY_STORY
    [192] = { "B12P01A1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [192] = { "B12P01A1", &gFileB01P01A1, }, /* alias: data/map_bg/B12P01A1.bpa */
#endif
#ifdef SKY_STORY
    [193] = { "B12P01Ac", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [193] = { "B12P01Ac", &gFileB12P01Ac, },
#endif
#ifdef SKY_STORY
    [194] = { "B12P01Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [194] = { "B12P01Am", &gFileB12P01Am, },
#endif
#ifdef SKY_STORY
    [195] = { "B12P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [195] = { "B12P01B", &gFileB12P01B, },
#endif
#ifdef SKY_STORY
    [196] = { "B12P01B1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [196] = { "B12P01B1", &gFileB01P01A1, }, /* alias: data/map_bg/B12P01B1.bpa */
#endif
#ifdef SKY_STORY
    [197] = { "B12P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [197] = { "B12P01B3", &gFileB12P01B3, },
#endif
#ifdef SKY_STORY
    [198] = { "B12P01Bc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [198] = { "B12P01Bc", &gFileB12P01Bc, },
#endif
#ifdef SKY_STORY
    [199] = { "B12P01Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [199] = { "B12P01Bm", &gFileB12P01Bm, },
#endif
#ifdef SKY_STORY
    [200] = { "B12P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [200] = { "B12P01C", &gFileB12P01C, },
#endif
#ifdef SKY_STORY
    [201] = { "B12P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [201] = { "B12P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B12P01C1.bpa */
#endif
#ifdef SKY_STORY
    [202] = { "B12P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [202] = { "B12P01Cc", &gFileB12P01Cc, },
#endif
#ifdef SKY_STORY
    [203] = { "B12P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [203] = { "B12P01Cm", &gFileB12P01Cm, },
#endif
#ifdef SKY_STORY
    [204] = { "B12P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [204] = { "B12P02A", &gFileB12P02A, },
#endif
#ifdef SKY_STORY
    [205] = { "B12P02Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [205] = { "B12P02Am", &gFileB12P02Am, },
#endif
#ifdef SKY_STORY
    [206] = { "B12P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [206] = { "B12P02B", &gFileB12P02A, }, /* alias: data/map_bg/B12P02B.bpl */
#endif
#ifdef SKY_STORY
    [207] = { "B12P02Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [207] = { "B12P02Bm", &gFileB12P02Bm, },
#endif
#ifdef SKY_STORY
    [208] = { "B12P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [208] = { "B12P02C", &gFileB12P02C, },
#endif
#ifdef SKY_STORY
    [209] = { "B12P02Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [209] = { "B12P02Cc", &gFileB12P02Cc, },
#endif
#ifdef SKY_STORY
    [210] = { "B12P02Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [210] = { "B12P02Cm", &gFileB12P02Cm, },
#endif
#ifdef SKY_STORY
    [211] = { "B12P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [211] = { "B12P02c", &gFileB12P02c, },
#endif
#ifdef SKY_STORY
    [212] = { "B13P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [212] = { "B13P01A", &gFileB12P01A, }, /* alias: data/map_bg/B13P01A.bpl */
#endif
#ifdef SKY_STORY
    [213] = { "B13P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [213] = { "B13P01B", &gFileB13P01B, },
#endif
#ifdef SKY_STORY
    [214] = { "B13P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [214] = { "B13P01B3", &gFileB13P01B3, },
#endif
#ifdef SKY_STORY
    [215] = { "B13P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [215] = { "B13P01C", &gFileB13P01C, },
#endif
#ifdef SKY_STORY
    [216] = { "B13P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [216] = { "B13P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B13P01C1.bpa */
#endif
#ifdef SKY_STORY
    [217] = { "B13P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [217] = { "B13P01Cc", &gFileB13P01Cc, },
#endif
#ifdef SKY_STORY
    [218] = { "B13P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [218] = { "B13P01Cm", &gFileB13P01Cm, },
#endif
#ifdef SKY_STORY
    [219] = { "B13P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [219] = { "B13P02A", &gFileB12P02A, }, /* alias: data/map_bg/B13P02A.bpl */
#endif
#ifdef SKY_STORY
    [220] = { "B13P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [220] = { "B13P02B", &gFileB12P02A, }, /* alias: data/map_bg/B13P02B.bpl */
#endif
#ifdef SKY_STORY
    [221] = { "B13P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [221] = { "B13P02C", &gFileB12P02C, }, /* alias: data/map_bg/B13P02C.bpl */
#endif
#ifdef SKY_STORY
    [222] = { "B14P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [222] = { "B14P01A", &gFileB14P01A, },
#endif
#ifdef SKY_STORY
    [223] = { "B14P01A1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [223] = { "B14P01A1", &gFileB01P01A1, }, /* alias: data/map_bg/B14P01A1.bpa */
#endif
#ifdef SKY_STORY
    [224] = { "B14P01Ac", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [224] = { "B14P01Ac", &gFileB14P01Ac, },
#endif
#ifdef SKY_STORY
    [225] = { "B14P01Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [225] = { "B14P01Am", &gFileB14P01Am, },
#endif
#ifdef SKY_STORY
    [226] = { "B14P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [226] = { "B14P01B", &gFileB14P01B, },
#endif
#ifdef SKY_STORY
    [227] = { "B14P01B1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [227] = { "B14P01B1", &gFileB01P01A1, }, /* alias: data/map_bg/B14P01B1.bpa */
#endif
#ifdef SKY_STORY
    [228] = { "B14P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [228] = { "B14P01B3", &gFileB14P01B3, },
#endif
#ifdef SKY_STORY
    [229] = { "B14P01Bc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [229] = { "B14P01Bc", &gFileB14P01Bc, },
#endif
#ifdef SKY_STORY
    [230] = { "B14P01Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [230] = { "B14P01Bm", &gFileB14P01Bm, },
#endif
#ifdef SKY_STORY
    [231] = { "B14P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [231] = { "B14P01C", &gFileB14P01C, },
#endif
#ifdef SKY_STORY
    [232] = { "B14P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [232] = { "B14P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B14P01C1.bpa */
#endif
#ifdef SKY_STORY
    [233] = { "B14P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [233] = { "B14P01Cc", &gFileB14P01Cc, },
#endif
#ifdef SKY_STORY
    [234] = { "B14P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [234] = { "B14P01Cm", &gFileB14P01Cm, },
#endif
#ifdef SKY_STORY
    [235] = { "B14P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [235] = { "B14P02A", &gFileB14P02A, },
#endif
#ifdef SKY_STORY
    [236] = { "B14P02Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [236] = { "B14P02Am", &gFileB14P02Am, },
#endif
#ifdef SKY_STORY
    [237] = { "B14P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [237] = { "B14P02B", &gFileB14P02A, }, /* alias: data/map_bg/B14P02B.bpl */
#endif
#ifdef SKY_STORY
    [238] = { "B14P02Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [238] = { "B14P02Bm", &gFileB14P02Bm, },
#endif
#ifdef SKY_STORY
    [239] = { "B14P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [239] = { "B14P02C", &gFileB14P02C, },
#endif
#ifdef SKY_STORY
    [240] = { "B14P02Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [240] = { "B14P02Cc", &gFileB14P02Cc, },
#endif
#ifdef SKY_STORY
    [241] = { "B14P02Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [241] = { "B14P02Cm", &gFileB14P02Cm, },
#endif
#ifdef SKY_STORY
    [242] = { "B14P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [242] = { "B14P02c", &gFileB14P02c, },
#endif
#ifdef SKY_STORY
    [243] = { "B15P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [243] = { "B15P01A", &gFileB14P01A, }, /* alias: data/map_bg/B15P01A.bpl */
#endif
#ifdef SKY_STORY
    [244] = { "B15P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [244] = { "B15P01B", &gFileB15P01B, },
#endif
#ifdef SKY_STORY
    [245] = { "B15P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [245] = { "B15P01B3", &gFileB15P01B3, },
#endif
#ifdef SKY_STORY
    [246] = { "B15P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [246] = { "B15P01C", &gFileB15P01C, },
#endif
#ifdef SKY_STORY
    [247] = { "B15P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [247] = { "B15P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B15P01C1.bpa */
#endif
#ifdef SKY_STORY
    [248] = { "B15P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [248] = { "B15P01Cc", &gFileB15P01Cc, },
#endif
#ifdef SKY_STORY
    [249] = { "B15P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [249] = { "B15P01Cm", &gFileB15P01Cm, },
#endif
#ifdef SKY_STORY
    [250] = { "B15P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [250] = { "B15P02A", &gFileB14P02A, }, /* alias: data/map_bg/B15P02A.bpl */
#endif
#ifdef SKY_STORY
    [251] = { "B15P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [251] = { "B15P02B", &gFileB14P02A, }, /* alias: data/map_bg/B15P02B.bpl */
#endif
#ifdef SKY_STORY
    [252] = { "B15P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [252] = { "B15P02C", &gFileB14P02C, }, /* alias: data/map_bg/B15P02C.bpl */
#endif
#ifdef SKY_STORY
    [253] = { "B16P01A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [253] = { "B16P01A", &gFileB14P01A, }, /* alias: data/map_bg/B16P01A.bpl */
#endif
#ifdef SKY_STORY
    [254] = { "B16P01B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [254] = { "B16P01B", &gFileB16P01B, },
#endif
#ifdef SKY_STORY
    [255] = { "B16P01B3", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [255] = { "B16P01B3", &gFileB16P01B3, },
#endif
#ifdef SKY_STORY
    [256] = { "B16P01C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [256] = { "B16P01C", &gFileB16P01C, },
#endif
#ifdef SKY_STORY
    [257] = { "B16P01C1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [257] = { "B16P01C1", &gFileB01P01A1, }, /* alias: data/map_bg/B16P01C1.bpa */
#endif
#ifdef SKY_STORY
    [258] = { "B16P01Cc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [258] = { "B16P01Cc", &gFileB16P01Cc, },
#endif
#ifdef SKY_STORY
    [259] = { "B16P01Cm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [259] = { "B16P01Cm", &gFileB16P01Cm, },
#endif
#ifdef SKY_STORY
    [260] = { "B16P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [260] = { "B16P02A", &gFileB14P02A, }, /* alias: data/map_bg/B16P02A.bpl */
#endif
#ifdef SKY_STORY
    [261] = { "B16P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [261] = { "B16P02B", &gFileB14P02A, }, /* alias: data/map_bg/B16P02B.bpl */
#endif
#ifdef SKY_STORY
    [262] = { "B16P02C", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [262] = { "B16P02C", &gFileB14P02C, }, /* alias: data/map_bg/B16P02C.bpl */
#endif
    [263] = { "D01P01", &gFileD01P01, },
    [264] = { "D01P01c", &gFileD01P01c, },
    [265] = { "D01P01m", &gFileD01P01m, },
    [266] = { "D01P02", &gFileD01P02, },
    [267] = { "D01P02c", &gFileD01P02c, },
    [268] = { "D01P02m", &gFileD01P02m, },
#ifdef SKY_STORY
    [269] = { "D02P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [269] = { "D02P01", &gFileD02P01, },
#endif
#ifdef SKY_STORY
    [270] = { "D02P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [270] = { "D02P01c", &gFileD02P01c, },
#endif
#ifdef SKY_STORY
    [271] = { "D02P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [271] = { "D02P01m", &gFileD02P01m, },
#endif
    [272] = { "D02P02", &gFileD01P02, }, /* alias: data/map_bg/D02P02.bpl */
    [273] = { "D02P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D02P02c.bpc.lz */
#ifdef SKY_STORY
    [274] = { "D02P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [274] = { "D02P02m", &gFileD02P02m, },
#endif
#ifdef SKY_STORY
    [275] = { "D03P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [275] = { "D03P01", &gFileD03P01, },
#endif
#ifdef SKY_STORY
    [276] = { "D03P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [276] = { "D03P01c", &gFileD03P01c, },
#endif
#ifdef SKY_STORY
    [277] = { "D03P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [277] = { "D03P01m", &gFileD03P01m, },
#endif
#ifdef SKY_STORY
    [278] = { "D03P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [278] = { "D03P02", &gFileD03P02, },
#endif
#ifdef SKY_STORY
    [279] = { "D03P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [279] = { "D03P02c", &gFileD03P02c, },
#endif
#ifdef SKY_STORY
    [280] = { "D03P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [280] = { "D03P02m", &gFileD03P02m, },
#endif
#ifdef SKY_STORY
    [281] = { "D04P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [281] = { "D04P01", &gFileD04P01, },
#endif
#ifdef SKY_STORY
    [282] = { "D04P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [282] = { "D04P01c", &gFileD04P01c, },
#endif
#ifdef SKY_STORY
    [283] = { "D04P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [283] = { "D04P01m", &gFileD04P01m, },
#endif
#ifdef SKY_STORY
    [284] = { "D04P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [284] = { "D04P02", &gFileD04P02, },
#endif
#ifdef SKY_STORY
    [285] = { "D04P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [285] = { "D04P02c", &gFileD04P02c, },
#endif
#ifdef SKY_STORY
    [286] = { "D04P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [286] = { "D04P02m", &gFileD04P02m, },
#endif
#ifdef SKY_STORY
    [287] = { "D05P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [287] = { "D05P01", &gFileD05P01, },
#endif
#ifdef SKY_STORY
    [288] = { "D05P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [288] = { "D05P01c", &gFileD05P01c, },
#endif
#ifdef SKY_STORY
    [289] = { "D05P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [289] = { "D05P01m", &gFileD05P01m, },
#endif
    [290] = { "D05P02", &gFileD01P02, }, /* alias: data/map_bg/D05P02.bpl */
    [291] = { "D05P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D05P02c.bpc.lz */
#ifdef SKY_STORY
    [292] = { "D05P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [292] = { "D05P02m", &gFileD05P02m, },
#endif
#ifdef SKY_STORY
    [293] = { "D06P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [293] = { "D06P01", &gFileD06P01, },
#endif
#ifdef SKY_STORY
    [294] = { "D06P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [294] = { "D06P01c", &gFileD06P01c, },
#endif
#ifdef SKY_STORY
    [295] = { "D06P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [295] = { "D06P01m", &gFileD06P01m, },
#endif
    [296] = { "D06P02", &gFileD01P02, }, /* alias: data/map_bg/D06P02.bpl */
    [297] = { "D06P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D06P02c.bpc.lz */
#ifdef SKY_STORY
    [298] = { "D06P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [298] = { "D06P02m", &gFileD06P02m, },
#endif
#ifdef SKY_STORY
    [299] = { "D06P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [299] = { "D06P03", &gFileD06P03, },
#endif
#ifdef SKY_STORY
    [300] = { "D06P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [300] = { "D06P03c", &gFileD06P03c, },
#endif
#ifdef SKY_STORY
    [301] = { "D06P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [301] = { "D06P03m", &gFileD06P03m, },
#endif
#ifdef SKY_STORY
    [302] = { "D07P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [302] = { "D07P01", &gFileD07P01, },
#endif
#ifdef SKY_STORY
    [303] = { "D07P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [303] = { "D07P01c", &gFileD07P01c, },
#endif
#ifdef SKY_STORY
    [304] = { "D07P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [304] = { "D07P01m", &gFileD07P01m, },
#endif
#ifdef SKY_STORY
    [305] = { "D07P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [305] = { "D07P02", &gFileA04P01, }, /* alias: data/map_bg/D07P02.bpl */
#endif
#ifdef SKY_STORY
    [306] = { "D08P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [306] = { "D08P01", &gFileD08P01, },
#endif
#ifdef SKY_STORY
    [307] = { "D08P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [307] = { "D08P01c", &gFileD08P01c, },
#endif
#ifdef SKY_STORY
    [308] = { "D08P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [308] = { "D08P01m", &gFileD08P01m, },
#endif
#ifdef SKY_STORY
    [309] = { "D08P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [309] = { "D08P02", &gFileA02P03, }, /* alias: data/map_bg/D08P02.bpl */
#endif
#ifdef SKY_STORY
    [310] = { "D08P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [310] = { "D08P02c", &gFileA02P03c, }, /* alias: data/map_bg_lz/D08P02c.bpc.lz */
#endif
#ifdef SKY_STORY
    [311] = { "D08P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [311] = { "D08P02m", &gFileA02P03m, }, /* alias: data/map_bg_lz/D08P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [312] = { "D09P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [312] = { "D09P01", &gFileD09P01, },
#endif
#ifdef SKY_STORY
    [313] = { "D09P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [313] = { "D09P01c", &gFileD09P01c, },
#endif
#ifdef SKY_STORY
    [314] = { "D09P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [314] = { "D09P01m", &gFileD09P01m, },
#endif
    [315] = { "D09P02", &gFileD01P02, }, /* alias: data/map_bg/D09P02.bpl */
    [316] = { "D09P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D09P02c.bpc.lz */
#ifdef SKY_STORY
    [317] = { "D09P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [317] = { "D09P02m", &gFileD06P02m, }, /* alias: data/map_bg_lz/D09P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [318] = { "D09P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [318] = { "D09P03", &gFileD09P03, },
#endif
#ifdef SKY_STORY
    [319] = { "D09P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [319] = { "D09P03c", &gFileD09P03c, },
#endif
#ifdef SKY_STORY
    [320] = { "D09P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [320] = { "D09P03m", &gFileD09P03m, },
#endif
#ifdef SKY_STORY
    [321] = { "D10P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [321] = { "D10P01", &gFileA03P02, }, /* alias: data/map_bg/D10P01.bpl */
#endif
#ifdef SKY_STORY
    [322] = { "D10P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [322] = { "D10P01c", &gFileD10P01c, },
#endif
#ifdef SKY_STORY
    [323] = { "D10P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [323] = { "D10P01m", &gFileD10P01m, },
#endif
    [324] = { "D10P02", &gFileD01P02, }, /* alias: data/map_bg/D10P02.bpl */
    [325] = { "D10P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D10P02c.bpc.lz */
#ifdef SKY_STORY
    [326] = { "D10P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [326] = { "D10P02m", &gFileD06P02m, }, /* alias: data/map_bg_lz/D10P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [327] = { "D10P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [327] = { "D10P03", &gFileD10P03, },
#endif
#ifdef SKY_STORY
    [328] = { "D10P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [328] = { "D10P03c", &gFileD10P03c, },
#endif
#ifdef SKY_STORY
    [329] = { "D10P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [329] = { "D10P03m", &gFileD10P03m, },
#endif
#ifdef SKY_STORY
    [330] = { "D11P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [330] = { "D11P01", &gFileD11P01, },
#endif
#ifdef SKY_STORY
    [331] = { "D11P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [331] = { "D11P01c", &gFileD11P01c, },
#endif
#ifdef SKY_STORY
    [332] = { "D11P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [332] = { "D11P01m", &gFileD11P01m, },
#endif
    [333] = { "D11P02", &gFileD01P02, }, /* alias: data/map_bg/D11P02.bpl */
    [334] = { "D11P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D11P02c.bpc.lz */
#ifdef SKY_STORY
    [335] = { "D11P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [335] = { "D11P02m", &gFileD06P02m, }, /* alias: data/map_bg_lz/D11P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [336] = { "D11P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [336] = { "D11P03", &gFileD11P03, },
#endif
#ifdef SKY_STORY
    [337] = { "D11P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [337] = { "D11P03c", &gFileD11P03c, },
#endif
#ifdef SKY_STORY
    [338] = { "D11P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [338] = { "D11P03m", &gFileD11P03m, },
#endif
#ifdef SKY_STORY
    [339] = { "D12P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [339] = { "D12P01", &gFileD12P01, },
#endif
#ifdef SKY_STORY
    [340] = { "D12P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [340] = { "D12P01c", &gFileD12P01c, },
#endif
#ifdef SKY_STORY
    [341] = { "D12P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [341] = { "D12P01m", &gFileD12P01m, },
#endif
    [342] = { "D12P02", &gFileD01P02, }, /* alias: data/map_bg/D12P02.bpl */
    [343] = { "D12P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D12P02c.bpc.lz */
#ifdef SKY_STORY
    [344] = { "D12P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [344] = { "D12P02m", &gFileD06P02m, }, /* alias: data/map_bg_lz/D12P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [345] = { "D12P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [345] = { "D12P04", &gFileD12P04, },
#endif
#ifdef SKY_STORY
    [346] = { "D12P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [346] = { "D12P04c", &gFileD12P04c, },
#endif
#ifdef SKY_STORY
    [347] = { "D12P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [347] = { "D12P04m", &gFileD12P04m, },
#endif
#ifdef SKY_STORY
    [348] = { "D13P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [348] = { "D13P01", &gFileD13P01, },
#endif
#ifdef SKY_STORY
    [349] = { "D13P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [349] = { "D13P01c", &gFileD13P01c, },
#endif
#ifdef SKY_STORY
    [350] = { "D13P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [350] = { "D13P01m", &gFileD13P01m, },
#endif
    [351] = { "D13P02", &gFileD01P02, }, /* alias: data/map_bg/D13P02.bpl */
    [352] = { "D13P02c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D13P02c.bpc.lz */
#ifdef SKY_STORY
    [353] = { "D13P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [353] = { "D13P02m", &gFileD06P02m, }, /* alias: data/map_bg_lz/D13P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [354] = { "D13P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [354] = { "D13P03", &gFileD13P03, },
#endif
#ifdef SKY_STORY
    [355] = { "D13P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [355] = { "D13P03c", &gFileD13P03c, },
#endif
#ifdef SKY_STORY
    [356] = { "D13P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [356] = { "D13P03m", &gFileD13P03m, },
#endif
#ifdef SKY_STORY
    [357] = { "D14P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [357] = { "D14P01", &gFileD14P01, },
#endif
#ifdef SKY_STORY
    [358] = { "D14P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [358] = { "D14P01c", &gFileD14P01c, },
#endif
#ifdef SKY_STORY
    [359] = { "D14P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [359] = { "D14P01m", &gFileD14P01m, },
#endif
#ifdef SKY_STORY
    [360] = { "D15P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [360] = { "D15P01", &gFileD15P01, },
#endif
#ifdef SKY_STORY
    [361] = { "D15P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [361] = { "D15P01c", &gFileD15P01c, },
#endif
#ifdef SKY_STORY
    [362] = { "D15P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [362] = { "D15P01m", &gFileD15P01m, },
#endif
    [363] = { "D16P01", &gFileD01P02, }, /* alias: data/map_bg/D16P01.bpl */
    [364] = { "D16P01c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D16P01c.bpc.lz */
#ifdef SKY_STORY
    [365] = { "D16P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [365] = { "D16P01m", &gFileD16P01m, },
#endif
    [366] = { "D17P01", &gFileD01P02, }, /* alias: data/map_bg/D17P01.bpl */
    [367] = { "D17P01c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D17P01c.bpc.lz */
#ifdef SKY_STORY
    [368] = { "D17P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [368] = { "D17P01m", &gFileD17P01m, },
#endif
    [369] = { "D18P01", &gFileD01P02, }, /* alias: data/map_bg/D18P01.bpl */
    [370] = { "D18P01c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D18P01c.bpc.lz */
#ifdef SKY_STORY
    [371] = { "D18P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [371] = { "D18P01m", &gFileD18P01m, },
#endif
#ifdef SKY_STORY
    [372] = { "D19P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [372] = { "D19P01", &gFileD19P01, },
#endif
#ifdef SKY_STORY
    [373] = { "D19P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [373] = { "D19P01c", &gFileD19P01c, },
#endif
#ifdef SKY_STORY
    [374] = { "D19P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [374] = { "D19P01m", &gFileD19P01m, },
#endif
    [375] = { "D20P01", &gFileD01P02, }, /* alias: data/map_bg/D20P01.bpl */
    [376] = { "D20P01c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D20P01c.bpc.lz */
#ifdef SKY_STORY
    [377] = { "D20P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [377] = { "D20P01m", &gFileD20P01m, },
#endif
#ifdef SKY_STORY
    [378] = { "D21P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [378] = { "D21P01", &gFileD21P01, },
#endif
#ifdef SKY_STORY
    [379] = { "D21P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [379] = { "D21P01c", &gFileD21P01c, },
#endif
#ifdef SKY_STORY
    [380] = { "D21P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [380] = { "D21P01m", &gFileD21P01m, },
#endif
#ifdef SKY_STORY
    [381] = { "D22P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [381] = { "D22P01", &gFileD22P01, },
#endif
#ifdef SKY_STORY
    [382] = { "D22P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [382] = { "D22P01c", &gFileD22P01c, },
#endif
#ifdef SKY_STORY
    [383] = { "D22P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [383] = { "D22P01m", &gFileD22P01m, },
#endif
    [384] = { "D23P01", &gFileD01P02, }, /* alias: data/map_bg/D23P01.bpl */
    [385] = { "D23P01c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D23P01c.bpc.lz */
#ifdef SKY_STORY
    [386] = { "D23P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [386] = { "D23P01m", &gFileD23P01m, },
#endif
#ifdef SKY_STORY
    [387] = { "D24P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [387] = { "D24P01", &gFileD24P01, },
#endif
#ifdef SKY_STORY
    [388] = { "D24P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [388] = { "D24P01c", &gFileD24P01c, },
#endif
#ifdef SKY_STORY
    [389] = { "D24P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [389] = { "D24P01m", &gFileD24P01m, },
#endif
#ifdef SKY_STORY
    [390] = { "D24P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [390] = { "D24P02", &gFileD24P02, },
#endif
#ifdef SKY_STORY
    [391] = { "D24P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [391] = { "D24P02c", &gFileD24P02c, },
#endif
#ifdef SKY_STORY
    [392] = { "D24P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [392] = { "D24P02m", &gFileD24P02m, },
#endif
    [393] = { "D25P01", &gFileD01P02, }, /* alias: data/map_bg/D25P01.bpl */
    [394] = { "D25P01c", &gFileD01P02c, }, /* alias: data/map_bg_lz/D25P01c.bpc.lz */
#ifdef SKY_STORY
    [395] = { "D25P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [395] = { "D25P01m", &gFileD25P01m, },
#endif
#ifdef SKY_STORY
    [396] = { "ED0111A", &gFileED0111A, },
    [397] = { "ED0111Ac", &gFileED0111Ac, },
    [398] = { "ED0111Am", &gFileED0111Am, },
    [399] = { "ED0111B", &gFileED0111B, },
    [400] = { "ED0111Bc", &gFileED0111Bc, },
    [401] = { "ED0111Bm", &gFileED0111Bm, },
    [402] = { "ED0141A", &gFileED0141A, },
    [403] = { "ED0141Ac", &gFileED0141Ac, },
    [404] = { "ED0141Am", &gFileED0141Am, },
    [405] = { "EG0101B", &gFileEG0101B, },
    [406] = { "EG0101B1", &gFileEG0101B1, },
    [407] = { "EG0101Bc", &gFileEG0101Bc, },
    [408] = { "EG0101Bm", &gFileEG0101Bm, },
    [409] = { "EV0101A", &gFileEV0101A, },
    [410] = { "EV0101A1", &gFileEV0101A1, },
    [411] = { "EV0101Ac", &gFileEV0101Ac, },
    [412] = { "EV0101Am", &gFileEV0101Am, },
    [413] = { "EV0104B", &gFileEV0104B, },
    [414] = { "EV0104Bc", &gFileEV0104Bc, },
    [415] = { "EV0104Bm", &gFileEV0104Bm, },
    [416] = { "EV0105B", &gFileEV0105B, },
    [417] = { "EV0105Bc", &gFileEV0105Bc, },
    [418] = { "EV0105Bm", &gFileEV0105Bm, },
    [419] = { "EV0107B", &gFileEV0107B, },
    [420] = { "EV0107Bc", &gFileEV0107Bc, },
    [421] = { "EV0107Bm", &gFileEV0107Bm, },
#endif
#ifdef SKY_STORY
    [396 + SKY_GROUND_FILES] = { "H01P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [396 + SKY_GROUND_FILES] = { "H01P01", &gFileH01P01, },
#endif
#ifdef SKY_STORY
    [397 + SKY_GROUND_FILES] = { "H01P01W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [397 + SKY_GROUND_FILES] = { "H01P01W", &gFileH01P01W, },
#endif
#ifdef SKY_STORY
    [398 + SKY_GROUND_FILES] = { "H01P01W1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [398 + SKY_GROUND_FILES] = { "H01P01W1", &gFileH01P01W1, },
#endif
#ifdef SKY_STORY
    [399 + SKY_GROUND_FILES] = { "H01P01Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [399 + SKY_GROUND_FILES] = { "H01P01Wc", &gFileH01P01Wc, },
#endif
#ifdef SKY_STORY
    [400 + SKY_GROUND_FILES] = { "H01P01Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [400 + SKY_GROUND_FILES] = { "H01P01Wm", &gFileH01P01Wm, },
#endif
#ifdef SKY_STORY
    [401 + SKY_GROUND_FILES] = { "H01P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [401 + SKY_GROUND_FILES] = { "H01P01c", &gFileH01P01c, },
#endif
#ifdef SKY_STORY
    [402 + SKY_GROUND_FILES] = { "H01P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [402 + SKY_GROUND_FILES] = { "H01P01m", &gFileH01P01m, },
#endif
#ifdef SKY_STORY
    [403 + SKY_GROUND_FILES] = { "H01P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [403 + SKY_GROUND_FILES] = { "H01P02", &gFileH01P02, },
#endif
#ifdef SKY_STORY
    [404 + SKY_GROUND_FILES] = { "H01P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [404 + SKY_GROUND_FILES] = { "H01P02c", &gFileH01P02c, },
#endif
#ifdef SKY_STORY
    [405 + SKY_GROUND_FILES] = { "H01P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [405 + SKY_GROUND_FILES] = { "H01P02m", &gFileH01P02m, },
#endif
#ifdef SKY_STORY
    [406 + SKY_GROUND_FILES] = { "H01P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [406 + SKY_GROUND_FILES] = { "H01P03", &gFileH01P03, },
#endif
#ifdef SKY_STORY
    [407 + SKY_GROUND_FILES] = { "H01P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [407 + SKY_GROUND_FILES] = { "H01P03c", &gFileH01P03c, },
#endif
#ifdef SKY_STORY
    [408 + SKY_GROUND_FILES] = { "H01P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [408 + SKY_GROUND_FILES] = { "H01P03m", &gFileH01P03m, },
#endif
#ifdef SKY_STORY
    [409 + SKY_GROUND_FILES] = { "H02P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [409 + SKY_GROUND_FILES] = { "H02P01", &gFileH02P01, },
#endif
#ifdef SKY_STORY
    [410 + SKY_GROUND_FILES] = { "H02P01W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [410 + SKY_GROUND_FILES] = { "H02P01W", &gFileH01P01W, }, /* alias: data/map_bg/H02P01W.bpl */
#endif
#ifdef SKY_STORY
    [411 + SKY_GROUND_FILES] = { "H02P01W1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [411 + SKY_GROUND_FILES] = { "H02P01W1", &gFileH02P01W1, },
#endif
#ifdef SKY_STORY
    [412 + SKY_GROUND_FILES] = { "H02P01Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [412 + SKY_GROUND_FILES] = { "H02P01Wc", &gFileH02P01Wc, },
#endif
#ifdef SKY_STORY
    [413 + SKY_GROUND_FILES] = { "H02P01Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [413 + SKY_GROUND_FILES] = { "H02P01Wm", &gFileH02P01Wm, },
#endif
#ifdef SKY_STORY
    [414 + SKY_GROUND_FILES] = { "H02P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [414 + SKY_GROUND_FILES] = { "H02P01c", &gFileH02P01c, },
#endif
#ifdef SKY_STORY
    [415 + SKY_GROUND_FILES] = { "H02P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [415 + SKY_GROUND_FILES] = { "H02P01m", &gFileH02P01m, },
#endif
#ifdef SKY_STORY
    [416 + SKY_GROUND_FILES] = { "H02P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [416 + SKY_GROUND_FILES] = { "H02P02", &gFileH02P02, },
#endif
#ifdef SKY_STORY
    [417 + SKY_GROUND_FILES] = { "H02P02W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [417 + SKY_GROUND_FILES] = { "H02P02W", &gFileW05, }, /* alias: data/map_bg/H02P02W.bpl */
#endif
#ifdef SKY_STORY
    [418 + SKY_GROUND_FILES] = { "H02P02Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [418 + SKY_GROUND_FILES] = { "H02P02Wc", &gFileH02P02Wc, },
#endif
#ifdef SKY_STORY
    [419 + SKY_GROUND_FILES] = { "H02P02Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [419 + SKY_GROUND_FILES] = { "H02P02Wm", &gFileH02P02Wm, },
#endif
#ifdef SKY_STORY
    [420 + SKY_GROUND_FILES] = { "H02P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [420 + SKY_GROUND_FILES] = { "H02P02c", &gFileH02P02c, },
#endif
#ifdef SKY_STORY
    [421 + SKY_GROUND_FILES] = { "H02P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [421 + SKY_GROUND_FILES] = { "H02P02m", &gFileH02P02m, },
#endif
#ifdef SKY_STORY
    [422 + SKY_GROUND_FILES] = { "H02P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [422 + SKY_GROUND_FILES] = { "H02P03", &gFileH02P03, },
#endif
#ifdef SKY_STORY
    [423 + SKY_GROUND_FILES] = { "H02P03W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [423 + SKY_GROUND_FILES] = { "H02P03W", &gFileH02P03W, },
#endif
#ifdef SKY_STORY
    [424 + SKY_GROUND_FILES] = { "H02P03W1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [424 + SKY_GROUND_FILES] = { "H02P03W1", &gFileH02P03W1, },
#endif
#ifdef SKY_STORY
    [425 + SKY_GROUND_FILES] = { "H02P03Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [425 + SKY_GROUND_FILES] = { "H02P03Wc", &gFileH02P03Wc, },
#endif
#ifdef SKY_STORY
    [426 + SKY_GROUND_FILES] = { "H02P03Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [426 + SKY_GROUND_FILES] = { "H02P03Wm", &gFileH02P03Wm, },
#endif
#ifdef SKY_STORY
    [427 + SKY_GROUND_FILES] = { "H02P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [427 + SKY_GROUND_FILES] = { "H02P03c", &gFileH02P03c, },
#endif
#ifdef SKY_STORY
    [428 + SKY_GROUND_FILES] = { "H02P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [428 + SKY_GROUND_FILES] = { "H02P03m", &gFileH02P03m, },
#endif
#ifdef SKY_STORY
    [429 + SKY_GROUND_FILES] = { "H03P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [429 + SKY_GROUND_FILES] = { "H03P01", &gFileH03P01, },
#endif
#ifdef SKY_STORY
    [430 + SKY_GROUND_FILES] = { "H03P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [430 + SKY_GROUND_FILES] = { "H03P01c", &gFileH03P01c, },
#endif
#ifdef SKY_STORY
    [431 + SKY_GROUND_FILES] = { "H03P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [431 + SKY_GROUND_FILES] = { "H03P01m", &gFileH03P01m, },
#endif
#ifdef SKY_STORY
    [432 + SKY_GROUND_FILES] = { "H04P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [432 + SKY_GROUND_FILES] = { "H04P01", &gFileH04P01, },
#endif
#ifdef SKY_STORY
    [433 + SKY_GROUND_FILES] = { "H04P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [433 + SKY_GROUND_FILES] = { "H04P01c", &gFileH04P01c, },
#endif
#ifdef SKY_STORY
    [434 + SKY_GROUND_FILES] = { "H04P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [434 + SKY_GROUND_FILES] = { "H04P01m", &gFileH04P01m, },
#endif
#ifdef SKY_STORY
    [435 + SKY_GROUND_FILES] = { "H04P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [435 + SKY_GROUND_FILES] = { "H04P02", &gFileH04P02, },
#endif
#ifdef SKY_STORY
    [436 + SKY_GROUND_FILES] = { "H04P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [436 + SKY_GROUND_FILES] = { "H04P02c", &gFileH04P02c, },
#endif
#ifdef SKY_STORY
    [437 + SKY_GROUND_FILES] = { "H04P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [437 + SKY_GROUND_FILES] = { "H04P02m", &gFileH04P02m, },
#endif
#ifdef SKY_STORY
    [438 + SKY_GROUND_FILES] = { "H05P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [438 + SKY_GROUND_FILES] = { "H05P01", &gFileH05P01, },
#endif
#ifdef SKY_STORY
    [439 + SKY_GROUND_FILES] = { "H05P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [439 + SKY_GROUND_FILES] = { "H05P01c", &gFileH05P01c, },
#endif
#ifdef SKY_STORY
    [440 + SKY_GROUND_FILES] = { "H05P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [440 + SKY_GROUND_FILES] = { "H05P01m", &gFileH05P01m, },
#endif
#ifdef SKY_STORY
    [441 + SKY_GROUND_FILES] = { "H05P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [441 + SKY_GROUND_FILES] = { "H05P02", &gFileH05P02, },
#endif
#ifdef SKY_STORY
    [442 + SKY_GROUND_FILES] = { "H05P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [442 + SKY_GROUND_FILES] = { "H05P02c", &gFileH05P02c, },
#endif
#ifdef SKY_STORY
    [443 + SKY_GROUND_FILES] = { "H05P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [443 + SKY_GROUND_FILES] = { "H05P02m", &gFileH05P02m, },
#endif
#ifdef SKY_STORY
    [444 + SKY_GROUND_FILES] = { "H06P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [444 + SKY_GROUND_FILES] = { "H06P01", &gFileH06P01, },
#endif
#ifdef SKY_STORY
    [445 + SKY_GROUND_FILES] = { "H06P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [445 + SKY_GROUND_FILES] = { "H06P01c", &gFileH06P01c, },
#endif
#ifdef SKY_STORY
    [446 + SKY_GROUND_FILES] = { "H06P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [446 + SKY_GROUND_FILES] = { "H06P01m", &gFileH06P01m, },
#endif
#ifdef SKY_STORY
    [447 + SKY_GROUND_FILES] = { "H06P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [447 + SKY_GROUND_FILES] = { "H06P02", &gFileH06P02, },
#endif
#ifdef SKY_STORY
    [448 + SKY_GROUND_FILES] = { "H06P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [448 + SKY_GROUND_FILES] = { "H06P02c", &gFileH06P02c, },
#endif
#ifdef SKY_STORY
    [449 + SKY_GROUND_FILES] = { "H06P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [449 + SKY_GROUND_FILES] = { "H06P02m", &gFileH06P02m, },
#endif
#ifdef SKY_STORY
    [450 + SKY_GROUND_FILES] = { "H06P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [450 + SKY_GROUND_FILES] = { "H06P03", &gFileH06P03, },
#endif
#ifdef SKY_STORY
    [451 + SKY_GROUND_FILES] = { "H06P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [451 + SKY_GROUND_FILES] = { "H06P03c", &gFileH06P03c, },
#endif
#ifdef SKY_STORY
    [452 + SKY_GROUND_FILES] = { "H06P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [452 + SKY_GROUND_FILES] = { "H06P03m", &gFileH06P03m, },
#endif
#ifdef SKY_STORY
    [453 + SKY_GROUND_FILES] = { "H06P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [453 + SKY_GROUND_FILES] = { "H06P04", &gFileH06P04, },
#endif
#ifdef SKY_STORY
    [454 + SKY_GROUND_FILES] = { "H06P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [454 + SKY_GROUND_FILES] = { "H06P04c", &gFileH06P04c, },
#endif
#ifdef SKY_STORY
    [455 + SKY_GROUND_FILES] = { "H06P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [455 + SKY_GROUND_FILES] = { "H06P04m", &gFileH06P04m, },
#endif
#ifdef SKY_STORY
    [456 + SKY_GROUND_FILES] = { "H06P05", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [456 + SKY_GROUND_FILES] = { "H06P05", &gFileH06P05, },
#endif
#ifdef SKY_STORY
    [457 + SKY_GROUND_FILES] = { "H06P051", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [457 + SKY_GROUND_FILES] = { "H06P051", &gFileH06P051, },
#endif
#ifdef SKY_STORY
    [458 + SKY_GROUND_FILES] = { "H06P05c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [458 + SKY_GROUND_FILES] = { "H06P05c", &gFileH06P05c, },
#endif
#ifdef SKY_STORY
    [459 + SKY_GROUND_FILES] = { "H06P05m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [459 + SKY_GROUND_FILES] = { "H06P05m", &gFileH06P05m, },
#endif
#ifdef SKY_STORY
    [460 + SKY_GROUND_FILES] = { "H06P06", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [460 + SKY_GROUND_FILES] = { "H06P06", &gFileH06P06, },
#endif
#ifdef SKY_STORY
    [461 + SKY_GROUND_FILES] = { "H06P06c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [461 + SKY_GROUND_FILES] = { "H06P06c", &gFileH06P06c, },
#endif
#ifdef SKY_STORY
    [462 + SKY_GROUND_FILES] = { "H06P06m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [462 + SKY_GROUND_FILES] = { "H06P06m", &gFileH06P06m, },
#endif
#ifdef SKY_STORY
    [463 + SKY_GROUND_FILES] = { "H07P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [463 + SKY_GROUND_FILES] = { "H07P01", &gFileH07P01, },
#endif
#ifdef SKY_STORY
    [464 + SKY_GROUND_FILES] = { "H07P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [464 + SKY_GROUND_FILES] = { "H07P01c", &gFileH07P01c, },
#endif
#ifdef SKY_STORY
    [465 + SKY_GROUND_FILES] = { "H07P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [465 + SKY_GROUND_FILES] = { "H07P01m", &gFileH07P01m, },
#endif
#ifdef SKY_STORY
    [466 + SKY_GROUND_FILES] = { "H07P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [466 + SKY_GROUND_FILES] = { "H07P02", &gFileH07P02, },
#endif
#ifdef SKY_STORY
    [467 + SKY_GROUND_FILES] = { "H07P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [467 + SKY_GROUND_FILES] = { "H07P02c", &gFileH07P02c, },
#endif
#ifdef SKY_STORY
    [468 + SKY_GROUND_FILES] = { "H07P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [468 + SKY_GROUND_FILES] = { "H07P02m", &gFileH07P02m, },
#endif
#ifdef SKY_STORY
    [469 + SKY_GROUND_FILES] = { "H07P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [469 + SKY_GROUND_FILES] = { "H07P03", &gFileH07P03, },
#endif
#ifdef SKY_STORY
    [470 + SKY_GROUND_FILES] = { "H07P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [470 + SKY_GROUND_FILES] = { "H07P03c", &gFileH07P03c, },
#endif
#ifdef SKY_STORY
    [471 + SKY_GROUND_FILES] = { "H07P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [471 + SKY_GROUND_FILES] = { "H07P03m", &gFileH07P03m, },
#endif
#ifdef SKY_STORY
    [472 + SKY_GROUND_FILES] = { "H07P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [472 + SKY_GROUND_FILES] = { "H07P04", &gFileH07P04, },
#endif
#ifdef SKY_STORY
    [473 + SKY_GROUND_FILES] = { "H07P04W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [473 + SKY_GROUND_FILES] = { "H07P04W", &gFileH07P04W, },
#endif
#ifdef SKY_STORY
    [474 + SKY_GROUND_FILES] = { "H07P04W1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [474 + SKY_GROUND_FILES] = { "H07P04W1", &gFileH07P04W1, },
#endif
#ifdef SKY_STORY
    [475 + SKY_GROUND_FILES] = { "H07P04Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [475 + SKY_GROUND_FILES] = { "H07P04Wc", &gFileH07P04Wc, },
#endif
#ifdef SKY_STORY
    [476 + SKY_GROUND_FILES] = { "H07P04Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [476 + SKY_GROUND_FILES] = { "H07P04Wm", &gFileH07P04Wm, },
#endif
#ifdef SKY_STORY
    [477 + SKY_GROUND_FILES] = { "H07P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [477 + SKY_GROUND_FILES] = { "H07P04c", &gFileH07P04c, },
#endif
#ifdef SKY_STORY
    [478 + SKY_GROUND_FILES] = { "H07P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [478 + SKY_GROUND_FILES] = { "H07P04m", &gFileH07P04m, },
#endif
#ifdef SKY_STORY
    [479 + SKY_GROUND_FILES] = { "H07P05", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [479 + SKY_GROUND_FILES] = { "H07P05", &gFileH07P05, },
#endif
#ifdef SKY_STORY
    [480 + SKY_GROUND_FILES] = { "H07P05c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [480 + SKY_GROUND_FILES] = { "H07P05c", &gFileH07P05c, },
#endif
#ifdef SKY_STORY
    [481 + SKY_GROUND_FILES] = { "H07P05m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [481 + SKY_GROUND_FILES] = { "H07P05m", &gFileH07P05m, },
#endif
#ifdef SKY_STORY
    [482 + SKY_GROUND_FILES] = { "H07P06", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [482 + SKY_GROUND_FILES] = { "H07P06", &gFileH07P06, },
#endif
#ifdef SKY_STORY
    [483 + SKY_GROUND_FILES] = { "H07P06c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [483 + SKY_GROUND_FILES] = { "H07P06c", &gFileH07P06c, },
#endif
#ifdef SKY_STORY
    [484 + SKY_GROUND_FILES] = { "H07P06m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [484 + SKY_GROUND_FILES] = { "H07P06m", &gFileH07P06m, },
#endif
#ifdef SKY_STORY
    [485 + SKY_GROUND_FILES] = { "H07P07", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [485 + SKY_GROUND_FILES] = { "H07P07", &gFileH07P07, },
#endif
#ifdef SKY_STORY
    [486 + SKY_GROUND_FILES] = { "H07P07c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [486 + SKY_GROUND_FILES] = { "H07P07c", &gFileH07P07c, },
#endif
#ifdef SKY_STORY
    [487 + SKY_GROUND_FILES] = { "H07P07m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [487 + SKY_GROUND_FILES] = { "H07P07m", &gFileH07P07m, },
#endif
#ifdef SKY_STORY
    [488 + SKY_GROUND_FILES] = { "H07P08", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [488 + SKY_GROUND_FILES] = { "H07P08", &gFileH07P08, },
#endif
#ifdef SKY_STORY
    [489 + SKY_GROUND_FILES] = { "H07P08c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [489 + SKY_GROUND_FILES] = { "H07P08c", &gFileH07P08c, },
#endif
#ifdef SKY_STORY
    [490 + SKY_GROUND_FILES] = { "H07P08m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [490 + SKY_GROUND_FILES] = { "H07P08m", &gFileH07P08m, },
#endif
#ifdef SKY_STORY
    [491 + SKY_GROUND_FILES] = { "H08P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [491 + SKY_GROUND_FILES] = { "H08P01", &gFileH08P01, },
#endif
#ifdef SKY_STORY
    [492 + SKY_GROUND_FILES] = { "H08P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [492 + SKY_GROUND_FILES] = { "H08P011", &gFileH08P011, },
#endif
#ifdef SKY_STORY
    [493 + SKY_GROUND_FILES] = { "H08P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [493 + SKY_GROUND_FILES] = { "H08P01c", &gFileH08P01c, },
#endif
#ifdef SKY_STORY
    [494 + SKY_GROUND_FILES] = { "H08P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [494 + SKY_GROUND_FILES] = { "H08P01m", &gFileH08P01m, },
#endif
#ifdef SKY_STORY
    [495 + SKY_GROUND_FILES] = { "H09P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [495 + SKY_GROUND_FILES] = { "H09P01", &gFileH09P01, },
#endif
#ifdef SKY_STORY
    [496 + SKY_GROUND_FILES] = { "H09P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [496 + SKY_GROUND_FILES] = { "H09P01c", &gFileH09P01c, },
#endif
#ifdef SKY_STORY
    [497 + SKY_GROUND_FILES] = { "H09P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [497 + SKY_GROUND_FILES] = { "H09P01m", &gFileH09P01m, },
#endif
#ifdef SKY_STORY
    [498 + SKY_GROUND_FILES] = { "H09P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [498 + SKY_GROUND_FILES] = { "H09P02", &gFileH09P02, },
#endif
#ifdef SKY_STORY
    [499 + SKY_GROUND_FILES] = { "H09P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [499 + SKY_GROUND_FILES] = { "H09P02c", &gFileH09P02c, },
#endif
#ifdef SKY_STORY
    [500 + SKY_GROUND_FILES] = { "H09P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [500 + SKY_GROUND_FILES] = { "H09P02m", &gFileH09P02m, },
#endif
#ifdef SKY_STORY
    [501 + SKY_GROUND_FILES] = { "H10P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [501 + SKY_GROUND_FILES] = { "H10P01", &gFileH10P01, },
#endif
#ifdef SKY_STORY
    [502 + SKY_GROUND_FILES] = { "H10P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [502 + SKY_GROUND_FILES] = { "H10P01c", &gFileH10P01c, },
#endif
#ifdef SKY_STORY
    [503 + SKY_GROUND_FILES] = { "H10P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [503 + SKY_GROUND_FILES] = { "H10P01m", &gFileH10P01m, },
#endif
#ifdef SKY_STORY
    [504 + SKY_GROUND_FILES] = { "H10P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [504 + SKY_GROUND_FILES] = { "H10P02", &gFileH10P02, },
#endif
#ifdef SKY_STORY
    [505 + SKY_GROUND_FILES] = { "H10P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [505 + SKY_GROUND_FILES] = { "H10P02c", &gFileH10P02c, },
#endif
#ifdef SKY_STORY
    [506 + SKY_GROUND_FILES] = { "H10P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [506 + SKY_GROUND_FILES] = { "H10P02m", &gFileH10P02m, },
#endif
#ifdef SKY_STORY
    [507 + SKY_GROUND_FILES] = { "H11P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [507 + SKY_GROUND_FILES] = { "H11P01", &gFileH11P01, },
#endif
#ifdef SKY_STORY
    [508 + SKY_GROUND_FILES] = { "H11P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [508 + SKY_GROUND_FILES] = { "H11P01c", &gFileH11P01c, },
#endif
#ifdef SKY_STORY
    [509 + SKY_GROUND_FILES] = { "H11P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [509 + SKY_GROUND_FILES] = { "H11P01m", &gFileH11P01m, },
#endif
#ifdef SKY_STORY
    [510 + SKY_GROUND_FILES] = { "H12P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [510 + SKY_GROUND_FILES] = { "H12P01", &gFileH12P01, },
#endif
#ifdef SKY_STORY
    [511 + SKY_GROUND_FILES] = { "H12P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [511 + SKY_GROUND_FILES] = { "H12P011", &gFileH12P011, },
#endif
#ifdef SKY_STORY
    [512 + SKY_GROUND_FILES] = { "H12P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [512 + SKY_GROUND_FILES] = { "H12P01c", &gFileH12P01c, },
#endif
#ifdef SKY_STORY
    [513 + SKY_GROUND_FILES] = { "H12P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [513 + SKY_GROUND_FILES] = { "H12P01m", &gFileH12P01m, },
#endif
#ifdef SKY_STORY
    [514 + SKY_GROUND_FILES] = { "H13P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [514 + SKY_GROUND_FILES] = { "H13P01", &gFileH13P01, },
#endif
#ifdef SKY_STORY
    [515 + SKY_GROUND_FILES] = { "H13P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [515 + SKY_GROUND_FILES] = { "H13P011", &gFileH13P011, },
#endif
#ifdef SKY_STORY
    [516 + SKY_GROUND_FILES] = { "H13P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [516 + SKY_GROUND_FILES] = { "H13P01c", &gFileH13P01c, },
#endif
#ifdef SKY_STORY
    [517 + SKY_GROUND_FILES] = { "H13P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [517 + SKY_GROUND_FILES] = { "H13P01m", &gFileH13P01m, },
#endif
#ifdef SKY_STORY
    [518 + SKY_GROUND_FILES] = { "H13P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [518 + SKY_GROUND_FILES] = { "H13P02", &gFileH13P02, },
#endif
#ifdef SKY_STORY
    [519 + SKY_GROUND_FILES] = { "H13P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [519 + SKY_GROUND_FILES] = { "H13P02c", &gFileH13P02c, },
#endif
#ifdef SKY_STORY
    [520 + SKY_GROUND_FILES] = { "H13P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [520 + SKY_GROUND_FILES] = { "H13P02m", &gFileH13P02m, },
#endif
#ifdef SKY_STORY
    [521 + SKY_GROUND_FILES] = { "H13P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [521 + SKY_GROUND_FILES] = { "H13P03", &gFileH13P03, },
#endif
#ifdef SKY_STORY
    [522 + SKY_GROUND_FILES] = { "H13P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [522 + SKY_GROUND_FILES] = { "H13P03c", &gFileH13P03c, },
#endif
#ifdef SKY_STORY
    [523 + SKY_GROUND_FILES] = { "H13P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [523 + SKY_GROUND_FILES] = { "H13P03m", &gFileH13P03m, },
#endif
#ifdef SKY_STORY
    [524 + SKY_GROUND_FILES] = { "H13P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [524 + SKY_GROUND_FILES] = { "H13P04", &gFileH13P04, },
#endif
#ifdef SKY_STORY
    [525 + SKY_GROUND_FILES] = { "H13P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [525 + SKY_GROUND_FILES] = { "H13P04c", &gFileH13P04c, },
#endif
#ifdef SKY_STORY
    [526 + SKY_GROUND_FILES] = { "H13P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [526 + SKY_GROUND_FILES] = { "H13P04m", &gFileH13P04m, },
#endif
#ifdef SKY_STORY
    [527 + SKY_GROUND_FILES] = { "H14P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [527 + SKY_GROUND_FILES] = { "H14P01", &gFileH14P01, },
#endif
#ifdef SKY_STORY
    [528 + SKY_GROUND_FILES] = { "H14P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [528 + SKY_GROUND_FILES] = { "H14P01c", &gFileH14P01c, },
#endif
#ifdef SKY_STORY
    [529 + SKY_GROUND_FILES] = { "H14P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [529 + SKY_GROUND_FILES] = { "H14P01m", &gFileH14P01m, },
#endif
#ifdef SKY_STORY
    [530 + SKY_GROUND_FILES] = { "H15P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [530 + SKY_GROUND_FILES] = { "H15P01", &gFileH15P01, },
#endif
#ifdef SKY_STORY
    [531 + SKY_GROUND_FILES] = { "H15P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [531 + SKY_GROUND_FILES] = { "H15P01c", &gFileH15P01c, },
#endif
#ifdef SKY_STORY
    [532 + SKY_GROUND_FILES] = { "H15P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [532 + SKY_GROUND_FILES] = { "H15P01m", &gFileH15P01m, },
#endif
#ifdef SKY_STORY
    [533 + SKY_GROUND_FILES] = { "H16P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [533 + SKY_GROUND_FILES] = { "H16P01", &gFileH16P01, },
#endif
#ifdef SKY_STORY
    [534 + SKY_GROUND_FILES] = { "H16P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [534 + SKY_GROUND_FILES] = { "H16P01c", &gFileH16P01c, },
#endif
#ifdef SKY_STORY
    [535 + SKY_GROUND_FILES] = { "H16P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [535 + SKY_GROUND_FILES] = { "H16P01m", &gFileH16P01m, },
#endif
#ifdef SKY_STORY
    [536 + SKY_GROUND_FILES] = { "H17P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [536 + SKY_GROUND_FILES] = { "H17P01", &gFileH17P01, },
#endif
#ifdef SKY_STORY
    [537 + SKY_GROUND_FILES] = { "H17P01W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [537 + SKY_GROUND_FILES] = { "H17P01W", &gFileH17P01W, },
#endif
#ifdef SKY_STORY
    [538 + SKY_GROUND_FILES] = { "H17P01W1", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [538 + SKY_GROUND_FILES] = { "H17P01W1", &gFileH17P01W1, },
#endif
#ifdef SKY_STORY
    [539 + SKY_GROUND_FILES] = { "H17P01Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [539 + SKY_GROUND_FILES] = { "H17P01Wc", &gFileH17P01Wc, },
#endif
#ifdef SKY_STORY
    [540 + SKY_GROUND_FILES] = { "H17P01Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [540 + SKY_GROUND_FILES] = { "H17P01Wm", &gFileH17P01Wm, },
#endif
#ifdef SKY_STORY
    [541 + SKY_GROUND_FILES] = { "H17P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [541 + SKY_GROUND_FILES] = { "H17P01c", &gFileH17P01c, },
#endif
#ifdef SKY_STORY
    [542 + SKY_GROUND_FILES] = { "H17P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [542 + SKY_GROUND_FILES] = { "H17P01m", &gFileH17P01m, },
#endif
#ifdef SKY_STORY
    [543 + SKY_GROUND_FILES] = { "H18P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [543 + SKY_GROUND_FILES] = { "H18P01", &gFileH18P01, },
#endif
#ifdef SKY_STORY
    [544 + SKY_GROUND_FILES] = { "H18P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [544 + SKY_GROUND_FILES] = { "H18P011", &gFileH18P011, },
#endif
#ifdef SKY_STORY
    [545 + SKY_GROUND_FILES] = { "H18P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [545 + SKY_GROUND_FILES] = { "H18P01c", &gFileH18P01c, },
#endif
#ifdef SKY_STORY
    [546 + SKY_GROUND_FILES] = { "H18P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [546 + SKY_GROUND_FILES] = { "H18P01m", &gFileH18P01m, },
#endif
#ifdef SKY_STORY
    [547 + SKY_GROUND_FILES] = { "H19P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [547 + SKY_GROUND_FILES] = { "H19P01", &gFileH19P01, },
#endif
#ifdef SKY_STORY
    [548 + SKY_GROUND_FILES] = { "H19P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [548 + SKY_GROUND_FILES] = { "H19P011", &gFileH19P011, },
#endif
#ifdef SKY_STORY
    [549 + SKY_GROUND_FILES] = { "H19P01W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [549 + SKY_GROUND_FILES] = { "H19P01W", &gFileH19P01W, },
#endif
#ifdef SKY_STORY
    [550 + SKY_GROUND_FILES] = { "H19P01Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [550 + SKY_GROUND_FILES] = { "H19P01Wc", &gFileH19P01Wc, },
#endif
#ifdef SKY_STORY
    [551 + SKY_GROUND_FILES] = { "H19P01Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [551 + SKY_GROUND_FILES] = { "H19P01Wm", &gFileH19P01Wm, },
#endif
#ifdef SKY_STORY
    [552 + SKY_GROUND_FILES] = { "H19P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [552 + SKY_GROUND_FILES] = { "H19P01c", &gFileH19P01c, },
#endif
#ifdef SKY_STORY
    [553 + SKY_GROUND_FILES] = { "H19P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [553 + SKY_GROUND_FILES] = { "H19P01m", &gFileH19P01m, },
#endif
#ifdef SKY_STORY
    [554 + SKY_GROUND_FILES] = { "H20P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [554 + SKY_GROUND_FILES] = { "H20P01", &gFileH20P01, },
#endif
#ifdef SKY_STORY
    [555 + SKY_GROUND_FILES] = { "H20P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [555 + SKY_GROUND_FILES] = { "H20P01c", &gFileH20P01c, },
#endif
#ifdef SKY_STORY
    [556 + SKY_GROUND_FILES] = { "H20P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [556 + SKY_GROUND_FILES] = { "H20P01m", &gFileH20P01m, },
#endif
#ifdef SKY_STORY
    [557 + SKY_GROUND_FILES] = { "H21P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [557 + SKY_GROUND_FILES] = { "H21P01", &gFileH21P01, },
#endif
#ifdef SKY_STORY
    [558 + SKY_GROUND_FILES] = { "H21P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [558 + SKY_GROUND_FILES] = { "H21P01m", &gFileH21P01m, },
#endif
#ifdef SKY_STORY
    [559 + SKY_GROUND_FILES] = { "H21P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [559 + SKY_GROUND_FILES] = { "H21P02", &gFileH21P02, },
#endif
#ifdef SKY_STORY
    [560 + SKY_GROUND_FILES] = { "H21P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [560 + SKY_GROUND_FILES] = { "H21P02m", &gFileH21P02m, },
#endif
#ifdef SKY_STORY
    [561 + SKY_GROUND_FILES] = { "H21c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [561 + SKY_GROUND_FILES] = { "H21c", &gFileH21c, },
#endif
#ifdef SKY_STORY
    [562 + SKY_GROUND_FILES] = { "H22P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [562 + SKY_GROUND_FILES] = { "H22P01", &gFileH22P01, },
#endif
#ifdef SKY_STORY
    [563 + SKY_GROUND_FILES] = { "H22P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [563 + SKY_GROUND_FILES] = { "H22P01c", &gFileH22P01c, },
#endif
#ifdef SKY_STORY
    [564 + SKY_GROUND_FILES] = { "H22P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [564 + SKY_GROUND_FILES] = { "H22P01m", &gFileH22P01m, },
#endif
#ifdef SKY_STORY
    [565 + SKY_GROUND_FILES] = { "H23P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [565 + SKY_GROUND_FILES] = { "H23P01", &gFileH23P01, },
#endif
#ifdef SKY_STORY
    [566 + SKY_GROUND_FILES] = { "H23P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [566 + SKY_GROUND_FILES] = { "H23P011", &gFileH23P011, },
#endif
#ifdef SKY_STORY
    [567 + SKY_GROUND_FILES] = { "H23P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [567 + SKY_GROUND_FILES] = { "H23P01c", &gFileH23P01c, },
#endif
#ifdef SKY_STORY
    [568 + SKY_GROUND_FILES] = { "H23P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [568 + SKY_GROUND_FILES] = { "H23P01m", &gFileH23P01m, },
#endif
#ifdef SKY_STORY
    [569 + SKY_GROUND_FILES] = { "H24P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [569 + SKY_GROUND_FILES] = { "H24P01", &gFileH24P01, },
#endif
#ifdef SKY_STORY
    [570 + SKY_GROUND_FILES] = { "H24P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [570 + SKY_GROUND_FILES] = { "H24P01c", &gFileH24P01c, },
#endif
#ifdef SKY_STORY
    [571 + SKY_GROUND_FILES] = { "H24P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [571 + SKY_GROUND_FILES] = { "H24P01m", &gFileH24P01m, },
#endif
#ifdef SKY_STORY
    [572 + SKY_GROUND_FILES] = { "H25P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [572 + SKY_GROUND_FILES] = { "H25P01", &gFileH25P01, },
#endif
#ifdef SKY_STORY
    [573 + SKY_GROUND_FILES] = { "H25P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [573 + SKY_GROUND_FILES] = { "H25P01c", &gFileH25P01c, },
#endif
#ifdef SKY_STORY
    [574 + SKY_GROUND_FILES] = { "H25P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [574 + SKY_GROUND_FILES] = { "H25P01m", &gFileH25P01m, },
#endif
#ifdef SKY_STORY
    [575 + SKY_GROUND_FILES] = { "H26P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [575 + SKY_GROUND_FILES] = { "H26P01", &gFileH26P01, },
#endif
#ifdef SKY_STORY
    [576 + SKY_GROUND_FILES] = { "H26P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [576 + SKY_GROUND_FILES] = { "H26P01c", &gFileH26P01c, },
#endif
#ifdef SKY_STORY
    [577 + SKY_GROUND_FILES] = { "H26P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [577 + SKY_GROUND_FILES] = { "H26P01m", &gFileH26P01m, },
#endif
#ifdef SKY_STORY
    [578 + SKY_GROUND_FILES] = { "H27P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [578 + SKY_GROUND_FILES] = { "H27P01", &gFileH27P01, },
#endif
#ifdef SKY_STORY
    [579 + SKY_GROUND_FILES] = { "H27P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [579 + SKY_GROUND_FILES] = { "H27P01c", &gFileH27P01c, },
#endif
#ifdef SKY_STORY
    [580 + SKY_GROUND_FILES] = { "H27P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [580 + SKY_GROUND_FILES] = { "H27P01m", &gFileH27P01m, },
#endif
#ifdef SKY_STORY
    [581 + SKY_GROUND_FILES] = { "H28P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [581 + SKY_GROUND_FILES] = { "H28P01", &gFileH28P01, },
#endif
#ifdef SKY_STORY
    [582 + SKY_GROUND_FILES] = { "H28P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [582 + SKY_GROUND_FILES] = { "H28P01c", &gFileH28P01c, },
#endif
#ifdef SKY_STORY
    [583 + SKY_GROUND_FILES] = { "H28P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [583 + SKY_GROUND_FILES] = { "H28P01m", &gFileH28P01m, },
#endif
#ifdef SKY_STORY
    [584 + SKY_GROUND_FILES] = { "H28P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [584 + SKY_GROUND_FILES] = { "H28P02", &gFileH28P02, },
#endif
#ifdef SKY_STORY
    [585 + SKY_GROUND_FILES] = { "H28P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [585 + SKY_GROUND_FILES] = { "H28P02c", &gFileH28P02c, },
#endif
#ifdef SKY_STORY
    [586 + SKY_GROUND_FILES] = { "H28P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [586 + SKY_GROUND_FILES] = { "H28P02m", &gFileH28P02m, },
#endif
#ifdef SKY_STORY
    [587 + SKY_GROUND_FILES] = { "H29P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [587 + SKY_GROUND_FILES] = { "H29P01", &gFileH29P01, },
#endif
#ifdef SKY_STORY
    [588 + SKY_GROUND_FILES] = { "H29P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [588 + SKY_GROUND_FILES] = { "H29P01c", &gFileH29P01c, },
#endif
#ifdef SKY_STORY
    [589 + SKY_GROUND_FILES] = { "H29P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [589 + SKY_GROUND_FILES] = { "H29P01m", &gFileH29P01m, },
#endif
#ifdef SKY_STORY
    [590 + SKY_GROUND_FILES] = { "H29P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [590 + SKY_GROUND_FILES] = { "H29P02", &gFileH29P02, },
#endif
#ifdef SKY_STORY
    [591 + SKY_GROUND_FILES] = { "H29P021", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [591 + SKY_GROUND_FILES] = { "H29P021", &gFileH29P021, },
#endif
#ifdef SKY_STORY
    [592 + SKY_GROUND_FILES] = { "H29P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [592 + SKY_GROUND_FILES] = { "H29P02c", &gFileH29P02c, },
#endif
#ifdef SKY_STORY
    [593 + SKY_GROUND_FILES] = { "H29P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [593 + SKY_GROUND_FILES] = { "H29P02m", &gFileH29P02m, },
#endif
#ifdef SKY_STORY
    [594 + SKY_GROUND_FILES] = { "H29P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [594 + SKY_GROUND_FILES] = { "H29P03", &gFileH29P03, },
#endif
#ifdef SKY_STORY
    [595 + SKY_GROUND_FILES] = { "H29P03W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [595 + SKY_GROUND_FILES] = { "H29P03W", &gFileH29P03W, },
#endif
#ifdef SKY_STORY
    [596 + SKY_GROUND_FILES] = { "H29P03Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [596 + SKY_GROUND_FILES] = { "H29P03Wc", &gFileH29P03Wc, },
#endif
#ifdef SKY_STORY
    [597 + SKY_GROUND_FILES] = { "H29P03Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [597 + SKY_GROUND_FILES] = { "H29P03Wm", &gFileH29P03Wm, },
#endif
#ifdef SKY_STORY
    [598 + SKY_GROUND_FILES] = { "H29P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [598 + SKY_GROUND_FILES] = { "H29P03c", &gFileH29P03c, },
#endif
#ifdef SKY_STORY
    [599 + SKY_GROUND_FILES] = { "H29P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [599 + SKY_GROUND_FILES] = { "H29P03m", &gFileH29P03m, },
#endif
#ifdef SKY_STORY
    [600 + SKY_GROUND_FILES] = { "H29P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [600 + SKY_GROUND_FILES] = { "H29P04", &gFileH29P04, },
#endif
#ifdef SKY_STORY
    [601 + SKY_GROUND_FILES] = { "H29P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [601 + SKY_GROUND_FILES] = { "H29P04c", &gFileH29P04c, },
#endif
#ifdef SKY_STORY
    [602 + SKY_GROUND_FILES] = { "H29P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [602 + SKY_GROUND_FILES] = { "H29P04m", &gFileH29P04m, },
#endif
    [603 + SKY_GROUND_FILES] = { "S01", &gFileS01, },
#ifdef SKY_STORY
    [604 + SKY_GROUND_FILES] = { "S02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [604 + SKY_GROUND_FILES] = { "S02", &gFileS02, },
#endif
#ifdef SKY_STORY
    [605 + SKY_GROUND_FILES] = { "S02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [605 + SKY_GROUND_FILES] = { "S02c", &gFileS02c, },
#endif
#ifdef SKY_STORY
    [606 + SKY_GROUND_FILES] = { "S02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [606 + SKY_GROUND_FILES] = { "S02m", &gFileS02m, },
#endif
#ifdef SKY_STORY
    [607 + SKY_GROUND_FILES] = { "S03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [607 + SKY_GROUND_FILES] = { "S03", &gFileS03, },
#endif
#ifdef SKY_STORY
    [608 + SKY_GROUND_FILES] = { "S03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [608 + SKY_GROUND_FILES] = { "S03c", &gFileS03c, },
#endif
#ifdef SKY_STORY
    [609 + SKY_GROUND_FILES] = { "S03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [609 + SKY_GROUND_FILES] = { "S03m", &gFileS03m, },
#endif
    [610 + SKY_GROUND_FILES] = { "S04", &gFileS04, },
    [611 + SKY_GROUND_FILES] = { "S04c", &gFileS04c, },
    [612 + SKY_GROUND_FILES] = { "S04m", &gFileS04m, },
    [613 + SKY_GROUND_FILES] = { "S05", &gFileS05, },
    [614 + SKY_GROUND_FILES] = { "S05c", &gFileS05c, },
    [615 + SKY_GROUND_FILES] = { "S05m", &gFileS05m, },
#ifdef SKY_STORY
    [616 + SKY_GROUND_FILES] = { "S06", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [616 + SKY_GROUND_FILES] = { "S06", &gFileS06, },
#endif
#ifdef SKY_STORY
    [617 + SKY_GROUND_FILES] = { "S06c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [617 + SKY_GROUND_FILES] = { "S06c", &gFileS06c, },
#endif
#ifdef SKY_STORY
    [618 + SKY_GROUND_FILES] = { "S06m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [618 + SKY_GROUND_FILES] = { "S06m", &gFileS06m, },
#endif
#ifdef SKY_STORY
    [619 + SKY_GROUND_FILES] = { "T00P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [619 + SKY_GROUND_FILES] = { "T00P01", &gFileT00P01, },
#endif
#ifdef SKY_STORY
    [620 + SKY_GROUND_FILES] = { "T00P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [620 + SKY_GROUND_FILES] = { "T00P01c", &gFileT00P01c, },
#endif
#ifdef SKY_STORY
    [621 + SKY_GROUND_FILES] = { "T00P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [621 + SKY_GROUND_FILES] = { "T00P01m", &gFileT00P01m, },
#endif
#ifdef SKY_STORY
    [622 + SKY_GROUND_FILES] = { "T01P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [622 + SKY_GROUND_FILES] = { "T01P01", &gFileT01P01, },
#endif
#ifdef SKY_STORY
    [623 + SKY_GROUND_FILES] = { "T01P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [623 + SKY_GROUND_FILES] = { "T01P011", &gFileT01P011, },
#endif
#ifdef SKY_STORY
    [624 + SKY_GROUND_FILES] = { "T01P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [624 + SKY_GROUND_FILES] = { "T01P01c", &gFileT01P01c, },
#endif
#ifdef SKY_STORY
    [625 + SKY_GROUND_FILES] = { "T01P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [625 + SKY_GROUND_FILES] = { "T01P01m", &gFileT01P01m, },
#endif
#ifdef SKY_STORY
    [626 + SKY_GROUND_FILES] = { "T01P021", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [626 + SKY_GROUND_FILES] = { "T01P021", &gFileT01P021, },
#endif
#ifdef SKY_STORY
    [627 + SKY_GROUND_FILES] = { "T01P02A", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [627 + SKY_GROUND_FILES] = { "T01P02A", &gFileT01P02A, },
#endif
#ifdef SKY_STORY
    [628 + SKY_GROUND_FILES] = { "T01P02Am", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [628 + SKY_GROUND_FILES] = { "T01P02Am", &gFileT01P02Am, },
#endif
#ifdef SKY_STORY
    [629 + SKY_GROUND_FILES] = { "T01P02B", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [629 + SKY_GROUND_FILES] = { "T01P02B", &gFileT01P02A, }, /* alias: data/map_bg/T01P02B.bpl */
#endif
#ifdef SKY_STORY
    [630 + SKY_GROUND_FILES] = { "T01P02Bm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [630 + SKY_GROUND_FILES] = { "T01P02Bm", &gFileT01P02Bm, },
#endif
#ifdef SKY_STORY
    [631 + SKY_GROUND_FILES] = { "T01P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [631 + SKY_GROUND_FILES] = { "T01P02c", &gFileT01P02c, },
#endif
#ifdef SKY_STORY
    [632 + SKY_GROUND_FILES] = { "T01P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [632 + SKY_GROUND_FILES] = { "T01P03", &gFileT01P03, },
#endif
#ifdef SKY_STORY
    [633 + SKY_GROUND_FILES] = { "T01P031", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [633 + SKY_GROUND_FILES] = { "T01P031", &gFileT01P031, },
#endif
#ifdef SKY_STORY
    [634 + SKY_GROUND_FILES] = { "T01P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [634 + SKY_GROUND_FILES] = { "T01P03c", &gFileT01P03c, },
#endif
#ifdef SKY_STORY
    [635 + SKY_GROUND_FILES] = { "T01P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [635 + SKY_GROUND_FILES] = { "T01P03m", &gFileT01P03m, },
#endif
#ifdef SKY_STORY
    [636 + SKY_GROUND_FILES] = { "T01P04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [636 + SKY_GROUND_FILES] = { "T01P04", &gFileT01P04, },
#endif
#ifdef SKY_STORY
    [637 + SKY_GROUND_FILES] = { "T01P04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [637 + SKY_GROUND_FILES] = { "T01P04c", &gFileT01P04c, },
#endif
#ifdef SKY_STORY
    [638 + SKY_GROUND_FILES] = { "T01P04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [638 + SKY_GROUND_FILES] = { "T01P04m", &gFileT01P04m, },
#endif
#ifdef SKY_STORY
    [639 + SKY_GROUND_FILES] = { "T01P05", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [639 + SKY_GROUND_FILES] = { "T01P05", &gFileT01P05, },
#endif
#ifdef SKY_STORY
    [640 + SKY_GROUND_FILES] = { "T01P051", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [640 + SKY_GROUND_FILES] = { "T01P051", &gFileT01P011, }, /* alias: data/map_bg/T01P051.bpa */
#endif
#ifdef SKY_STORY
    [641 + SKY_GROUND_FILES] = { "T01P05c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [641 + SKY_GROUND_FILES] = { "T01P05c", &gFileT01P05c, },
#endif
#ifdef SKY_STORY
    [642 + SKY_GROUND_FILES] = { "T01P05m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [642 + SKY_GROUND_FILES] = { "T01P05m", &gFileT01P05m, },
#endif
#ifdef SKY_STORY
    [643 + SKY_GROUND_FILES] = { "T01P06", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [643 + SKY_GROUND_FILES] = { "T01P06", &gFileT01P06, },
#endif
#ifdef SKY_STORY
    [644 + SKY_GROUND_FILES] = { "T01P06c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [644 + SKY_GROUND_FILES] = { "T01P06c", &gFileT01P06c, },
#endif
#ifdef SKY_STORY
    [645 + SKY_GROUND_FILES] = { "T01P06m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [645 + SKY_GROUND_FILES] = { "T01P06m", &gFileT01P06m, },
#endif
#ifdef SKY_STORY
    [646 + SKY_GROUND_FILES] = { "T01P07", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [646 + SKY_GROUND_FILES] = { "T01P07", &gFileT01P07, },
#endif
#ifdef SKY_STORY
    [647 + SKY_GROUND_FILES] = { "T01P07W", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [647 + SKY_GROUND_FILES] = { "T01P07W", &gFileT01P07W, },
#endif
#ifdef SKY_STORY
    [648 + SKY_GROUND_FILES] = { "T01P07Wc", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [648 + SKY_GROUND_FILES] = { "T01P07Wc", &gFileT01P07Wc, },
#endif
#ifdef SKY_STORY
    [649 + SKY_GROUND_FILES] = { "T01P07Wm", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [649 + SKY_GROUND_FILES] = { "T01P07Wm", &gFileT01P07Wm, },
#endif
#ifdef SKY_STORY
    [650 + SKY_GROUND_FILES] = { "T01P07c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [650 + SKY_GROUND_FILES] = { "T01P07c", &gFileT01P07c, },
#endif
#ifdef SKY_STORY
    [651 + SKY_GROUND_FILES] = { "T01P07m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [651 + SKY_GROUND_FILES] = { "T01P07m", &gFileT01P07m, },
#endif
#ifdef SKY_STORY
    [652 + SKY_GROUND_FILES] = { "T01P08", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [652 + SKY_GROUND_FILES] = { "T01P08", &gFileT01P08, },
#endif
#ifdef SKY_STORY
    [653 + SKY_GROUND_FILES] = { "T01P08c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [653 + SKY_GROUND_FILES] = { "T01P08c", &gFileT01P08c, },
#endif
#ifdef SKY_STORY
    [654 + SKY_GROUND_FILES] = { "T01P08m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [654 + SKY_GROUND_FILES] = { "T01P08m", &gFileT01P08m, },
#endif
#ifdef SKY_STORY
    [655 + SKY_GROUND_FILES] = { "W01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [655 + SKY_GROUND_FILES] = { "W01", &gFileW01, },
#endif
#ifdef SKY_STORY
    [656 + SKY_GROUND_FILES] = { "W01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [656 + SKY_GROUND_FILES] = { "W01c", &gFileW01c, },
#endif
#ifdef SKY_STORY
    [657 + SKY_GROUND_FILES] = { "W01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [657 + SKY_GROUND_FILES] = { "W01m", &gFileW01m, },
#endif
#ifdef SKY_STORY
    [658 + SKY_GROUND_FILES] = { "W03P01", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [658 + SKY_GROUND_FILES] = { "W03P01", &gFileW03P01, },
#endif
#ifdef SKY_STORY
    [659 + SKY_GROUND_FILES] = { "W03P011", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [659 + SKY_GROUND_FILES] = { "W03P011", &gFileW03P011, },
#endif
#ifdef SKY_STORY
    [660 + SKY_GROUND_FILES] = { "W03P01c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [660 + SKY_GROUND_FILES] = { "W03P01c", &gFileW03P01c, },
#endif
#ifdef SKY_STORY
    [661 + SKY_GROUND_FILES] = { "W03P01m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [661 + SKY_GROUND_FILES] = { "W03P01m", &gFileW03P01m, },
#endif
#ifdef SKY_STORY
    [662 + SKY_GROUND_FILES] = { "W03P02", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [662 + SKY_GROUND_FILES] = { "W03P02", &gFileW03P01, }, /* alias: data/map_bg/W03P02.bpl */
#endif
#ifdef SKY_STORY
    [663 + SKY_GROUND_FILES] = { "W03P021", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [663 + SKY_GROUND_FILES] = { "W03P021", &gFileW03P021, },
#endif
#ifdef SKY_STORY
    [664 + SKY_GROUND_FILES] = { "W03P02c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [664 + SKY_GROUND_FILES] = { "W03P02c", &gFileW03P01c, }, /* alias: data/map_bg_lz/W03P02c.bpc.lz */
#endif
#ifdef SKY_STORY
    [665 + SKY_GROUND_FILES] = { "W03P02m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [665 + SKY_GROUND_FILES] = { "W03P02m", &gFileW03P01m, }, /* alias: data/map_bg_lz/W03P02m.bma.lz */
#endif
#ifdef SKY_STORY
    [666 + SKY_GROUND_FILES] = { "W03P03", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [666 + SKY_GROUND_FILES] = { "W03P03", &gFileW03P01, }, /* alias: data/map_bg/W03P03.bpl */
#endif
#ifdef SKY_STORY
    [667 + SKY_GROUND_FILES] = { "W03P031", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [667 + SKY_GROUND_FILES] = { "W03P031", &gFileW03P031, },
#endif
#ifdef SKY_STORY
    [668 + SKY_GROUND_FILES] = { "W03P03c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [668 + SKY_GROUND_FILES] = { "W03P03c", &gFileW03P03c, },
#endif
#ifdef SKY_STORY
    [669 + SKY_GROUND_FILES] = { "W03P03m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [669 + SKY_GROUND_FILES] = { "W03P03m", &gFileW03P03m, },
#endif
#ifdef SKY_STORY
    [670 + SKY_GROUND_FILES] = { "W04", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [670 + SKY_GROUND_FILES] = { "W04", &gFileW04, },
#endif
#ifdef SKY_STORY
    [671 + SKY_GROUND_FILES] = { "W041", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [671 + SKY_GROUND_FILES] = { "W041", &gFileW041, },
#endif
#ifdef SKY_STORY
    [672 + SKY_GROUND_FILES] = { "W04c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [672 + SKY_GROUND_FILES] = { "W04c", &gFileW04c, },
#endif
#ifdef SKY_STORY
    [673 + SKY_GROUND_FILES] = { "W04m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [673 + SKY_GROUND_FILES] = { "W04m", &gFileW04m, },
#endif
#ifdef SKY_STORY
    [674 + SKY_GROUND_FILES] = { "W05", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [674 + SKY_GROUND_FILES] = { "W05", &gFileW05, },
#endif
#ifdef SKY_STORY
    [675 + SKY_GROUND_FILES] = { "W05c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [675 + SKY_GROUND_FILES] = { "W05c", &gFileW05c, },
#endif
#ifdef SKY_STORY
    [676 + SKY_GROUND_FILES] = { "W05m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [676 + SKY_GROUND_FILES] = { "W05m", &gFileW05m, },
#endif
#ifdef SKY_STORY
    [677 + SKY_GROUND_FILES] = { "W06", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [677 + SKY_GROUND_FILES] = { "W06", &gFileW06, },
#endif
#ifdef SKY_STORY
    [678 + SKY_GROUND_FILES] = { "W06c", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [678 + SKY_GROUND_FILES] = { "W06c", &gFileW06c, },
#endif
#ifdef SKY_STORY
    [679 + SKY_GROUND_FILES] = { "W06m", &gFileED0111A, }, /* sky: Red story file not linked */
#else
    [679 + SKY_GROUND_FILES] = { "W06m", &gFileW06m, },
#endif
};
