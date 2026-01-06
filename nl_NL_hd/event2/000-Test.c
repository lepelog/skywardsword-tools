          void entrypoint_000_017() {
/*<253>*/ 	start()
/*<258>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 254, 'param3': 32}
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "")
/*<256>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 255, 'param3': 17}
/*<255>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 17}
          }

          void entrypoint_000_000() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "")
/*<  2>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_000_018() {
/*<259>*/ 	start()
/*<260>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "")
          }

          void entrypoint_000_001() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          }

          void entrypoint_000_019() {
/*<261>*/ 	start()
/*<262>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "")
/*<264>*/ 	story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*<263>*/ 	switch (choice(4)) {
          	  case 0:
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "")
/*<281>*/ 		make_actor_do_something(3, 0)
/*<265>*/ 		story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = false;
/*<266>*/ 		story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = false;
/*<268>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<269>*/ 		story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = true;
          		flw_279:
/*<279>*/ 		changeScene(0, 0) // 
          	  case 1:
/*<271>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "")
/*<282>*/ 		make_actor_do_something(7, 0)
/*<270>*/ 		story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
/*<272>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<273>*/ 		story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = true;
          		goto flw_279
          	  case 2:
/*<275>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "")
/*<283>*/ 		make_actor_do_something(8, 0)
/*<274>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = false;
/*<276>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<277>*/ 		story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = true;
          		goto flw_279
          	  case 3:
/*<278>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "")
/*<284>*/ 		make_actor_do_something(9, 0)
/*<280>*/ 		changeScene(1, 0) // 
          	}
          }

          void entrypoint_000_002() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "")
/*<  9>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_7:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
/*< 10>*/ 		switch (choice(3)) {
          		  case 0:
          			flw_8:
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "")
/*< 11>*/ 			switch (choice(4)) {
          			  case 0:
          			  case 1:
          			  case 2:
          			  case 3:
          			}
          		  case 1:
          			goto flw_8
          		  case 2:
          			goto flw_8
          		}
          	  case 1:
          		goto flw_7
          	}
          }

          void entrypoint_000_003() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "")
          }

          void entrypoint_000_020() {
/*<285>*/ 	start()
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 288, 'param3': 32}
/*<288>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "")
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': -1, 'param3': 17}
          }

          void entrypoint_000_004() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "")
          }

          void entrypoint_000_021() {
/*<289>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "")
/*<290>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 292, 'param3': 13}
/*<292>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "")
          }

          void entrypoint_000_005() {
/*< 16>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 6, unk: 0, line: 15 */ "")
          }

          void entrypoint_000_022() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "")
/*<295>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "")
/*<296>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "")
          }

          void entrypoint_000_006() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
          }

          void entrypoint_000_007() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "")
          }

          void entrypoint_000_008() {
/*< 22>*/ 	start()
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "")
/*< 24>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 3, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "")
          }

          void entrypoint_000_009() {
/*< 26>*/ 	start()
/*< 27>*/ 	printf(/* textboxtype: 0, unk: 7, line: 16 */ "")
/*< 29>*/ 	switch (choice(4)) {
          	  case 0:
/*< 28>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 33, 'param3': 30}
          		flw_33:
/*< 33>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 34, 'param3': 34}
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "")
/*< 35>*/ 		switch (choice(2)) {
          		  case 0:
/*< 36>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 30}
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 2, unk: 0, line: 18 */ "")
/*< 39>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          		  case 1:
/*< 37>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 30}
          			goto flw_38
          		}
          	  case 1:
/*< 30>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 33, 'param3': 30}
          		goto flw_33
          	  case 2:
/*< 31>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': -256, 'next': 33, 'param3': 30}
          		goto flw_33
          	  case 3:
/*< 32>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': -512, 'next': 33, 'param3': 30}
          		goto flw_33
          	}
          }

          void entrypoint_000_010() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "")
/*< 42>*/ 	switch (choice(2)) {
          	  case 0:
/*< 43>*/ 		{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 44, 'param3': 40}
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "")
          	}
          }

          void entrypoint_000_011() {
/*< 46>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "")
/*< 48>*/ 	switch (choice(4)) {
          	  case 0:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 2:
/*< 51>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 3:
/*< 52>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_000_012() {
/*< 53>*/ 	start()
/*<250>*/ 	scene_flags[21 'The Sky'][1 /* 0x1 02 */] = true;
/*<228>*/ 	story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<229>*/ 	story_flags[46 /* us: 805A9AE7 0x80, jp: 805ACD67 0x80 */] = true;
/*<230>*/ 	story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */] = true;
/*<231>*/ 	story_flags[48 /* us: 805A9AE6 0x02, jp: 805ACD66 0x02 */] = true;
/*<232>*/ 	story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */] = true;
/*<252>*/ 	story_flags[24 /* us: 805A9ADA 0x01, jp: 805ACD5A 0x01 */] = true;
/*<233>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*<234>*/ 	story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */] = true;
/*<235>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<236>*/ 	story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<251>*/ 	story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*< 54>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "")
/*< 55>*/ 	switch (choice(4)) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "")
/*<152>*/ 		story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */] = true;
/*<153>*/ 		story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */] = true;
/*<154>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<155>*/ 		story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */] = true;
/*<156>*/ 		story_flags[51 /* us: 805A9ADD 0x40, jp: 805ACD5D 0x40 */] = true;
/*<157>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<158>*/ 		story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<159>*/ 		story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<160>*/ 		story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<161>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<162>*/ 		story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<163>*/ 		story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<164>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<165>*/ 		story_flags[91 /* us: 805A9AF1 0x01, jp: 805ACD71 0x01 */] = true;
/*<166>*/ 		story_flags[95 /* us: 805A9AF1 0x10, jp: 805ACD71 0x10 */] = true;
/*<167>*/ 		story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */] = true;
/*<168>*/ 		story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */] = true;
/*<169>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
/*<170>*/ 		story_flags[466 /* us: 805A9B0F 0x08, jp: 805ACD8F 0x08 */] = true;
/*<171>*/ 		story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */] = true;
/*<172>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<173>*/ 		story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
/*<182>*/ 		story_flags[6 /* us: 805A9AD9 0x80, jp: 805ACD59 0x80 */] = true;
/*<183>*/ 		story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*<184>*/ 		story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */] = true;
/*<185>*/ 		story_flags[183 /* us: 805A9AE6 0x40, jp: 805ACD66 0x40 */] = true;
/*<186>*/ 		story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
/*<187>*/ 		story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */] = true;
/*<188>*/ 		story_flags[466 /* us: 805A9B0F 0x08, jp: 805ACD8F 0x08 */] = true;
/*<174>*/ 		story_flags[8 /* us: 805A9AD8 0x02, jp: 805ACD58 0x02 */] = true;
/*<175>*/ 		story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */] = true;
/*<176>*/ 		story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
/*<177>*/ 		story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */] = true;
/*<178>*/ 		story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<179>*/ 		story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<180>*/ 		story_flags[190 /* us: 805A9AED 0x80, jp: 805ACD6D 0x80 */] = true;
/*<181>*/ 		story_flags[211 /* us: 805A9AF0 0x80, jp: 805ACD70 0x80 */] = true;
/*<144>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
/*<145>*/ 		story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
/*<146>*/ 		story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<147>*/ 		story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<148>*/ 		story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
/*<149>*/ 		story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<150>*/ 		story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<151>*/ 		story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<189>*/ 		story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */] = true;
/*<190>*/ 		story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<191>*/ 		story_flags[10 /* us: 805A9AD8 0x08, jp: 805ACD58 0x08 */] = true;
/*<192>*/ 		story_flags[155 /* us: 805A9AE0 0x02, jp: 805ACD60 0x02 */] = true;
/*<193>*/ 		story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */] = true;
/*<194>*/ 		story_flags[158 /* us: 805A9AE0 0x10, jp: 805ACD60 0x10 */] = true;
/*<195>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<196>*/ 		story_flags[265 /* us: 805A9AF9 0x08, jp: 805ACD79 0x08 */] = true;
/*<197>*/ 		story_flags[266 /* us: 805A9AF9 0x10, jp: 805ACD79 0x10 */] = true;
/*<198>*/ 		story_flags[267 /* us: 805A9AF9 0x20, jp: 805ACD79 0x20 */] = true;
/*<199>*/ 		story_flags[268 /* us: 805A9AF9 0x40, jp: 805ACD79 0x40 */] = true;
/*<200>*/ 		story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
/*<201>*/ 		story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<202>*/ 		story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<203>*/ 		story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */] = true;
/*<204>*/ 		story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*<205>*/ 		story_flags[276 /* us: 805A9AF8 0x40, jp: 805ACD78 0x40 */] = true;
/*<206>*/ 		story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*<207>*/ 		story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*<208>*/ 		story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*<209>*/ 		story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
/*<210>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*<211>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
/*<212>*/ 		story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<213>*/ 		story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<215>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<216>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<217>*/ 		story_flags[156 /* us: 805A9AE0 0x04, jp: 805ACD60 0x04 */] = true;
/*<218>*/ 		story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
/*<219>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*<220>*/ 		story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<221>*/ 		story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<214>*/ 		story_flags[508 /* us: 805A9B12 0x80, jp: 805ACD92 0x80 */] = true;
/*<226>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
/*<237>*/ 		story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
/*<222>*/ 		changeScene(1, 0) // 
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "")
/*< 59>*/ 		story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */] = true;
/*< 60>*/ 		story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */] = true;
/*< 61>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*< 62>*/ 		story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */] = true;
/*< 63>*/ 		story_flags[51 /* us: 805A9ADD 0x40, jp: 805ACD5D 0x40 */] = true;
/*< 64>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*< 65>*/ 		story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*< 66>*/ 		story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*< 67>*/ 		story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*< 68>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*< 69>*/ 		story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*< 70>*/ 		story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*< 71>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*< 72>*/ 		story_flags[91 /* us: 805A9AF1 0x01, jp: 805ACD71 0x01 */] = true;
/*< 73>*/ 		story_flags[95 /* us: 805A9AF1 0x10, jp: 805ACD71 0x10 */] = true;
/*< 74>*/ 		story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */] = true;
/*< 75>*/ 		story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */] = true;
/*< 76>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
/*< 77>*/ 		story_flags[466 /* us: 805A9B0F 0x08, jp: 805ACD8F 0x08 */] = true;
/*< 78>*/ 		story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */] = true;
/*< 79>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*< 80>*/ 		story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
/*< 97>*/ 		story_flags[6 /* us: 805A9AD9 0x80, jp: 805ACD59 0x80 */] = true;
/*< 98>*/ 		story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 99>*/ 		story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */] = true;
/*<100>*/ 		story_flags[183 /* us: 805A9AE6 0x40, jp: 805ACD66 0x40 */] = true;
/*<101>*/ 		story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
/*<102>*/ 		story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */] = true;
/*<103>*/ 		story_flags[466 /* us: 805A9B0F 0x08, jp: 805ACD8F 0x08 */] = true;
/*< 89>*/ 		story_flags[8 /* us: 805A9AD8 0x02, jp: 805ACD58 0x02 */] = true;
/*< 90>*/ 		story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */] = true;
/*< 91>*/ 		story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
/*< 92>*/ 		story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */] = true;
/*< 93>*/ 		story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*< 94>*/ 		story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*< 95>*/ 		story_flags[190 /* us: 805A9AED 0x80, jp: 805ACD6D 0x80 */] = true;
/*< 96>*/ 		story_flags[211 /* us: 805A9AF0 0x80, jp: 805ACD70 0x80 */] = true;
/*<224>*/ 		changeScene(1, 0) // 
          	  case 2:
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "")
/*<104>*/ 		story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */] = true;
/*<105>*/ 		story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */] = true;
/*<106>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<107>*/ 		story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */] = true;
/*<108>*/ 		story_flags[51 /* us: 805A9ADD 0x40, jp: 805ACD5D 0x40 */] = true;
/*<109>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<110>*/ 		story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<111>*/ 		story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<112>*/ 		story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<113>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<114>*/ 		story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<115>*/ 		story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<116>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<117>*/ 		story_flags[91 /* us: 805A9AF1 0x01, jp: 805ACD71 0x01 */] = true;
/*<118>*/ 		story_flags[95 /* us: 805A9AF1 0x10, jp: 805ACD71 0x10 */] = true;
/*<119>*/ 		story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */] = true;
/*<120>*/ 		story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */] = true;
/*<121>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
/*<122>*/ 		story_flags[466 /* us: 805A9B0F 0x08, jp: 805ACD8F 0x08 */] = true;
/*<123>*/ 		story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */] = true;
/*<124>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<125>*/ 		story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
/*<134>*/ 		story_flags[6 /* us: 805A9AD9 0x80, jp: 805ACD59 0x80 */] = true;
/*<135>*/ 		story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*<136>*/ 		story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */] = true;
/*<137>*/ 		story_flags[183 /* us: 805A9AE6 0x40, jp: 805ACD66 0x40 */] = true;
/*<138>*/ 		story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
/*<139>*/ 		story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */] = true;
/*<140>*/ 		story_flags[466 /* us: 805A9B0F 0x08, jp: 805ACD8F 0x08 */] = true;
/*<126>*/ 		story_flags[8 /* us: 805A9AD8 0x02, jp: 805ACD58 0x02 */] = true;
/*<127>*/ 		story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */] = true;
/*<128>*/ 		story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
/*<129>*/ 		story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */] = true;
/*<130>*/ 		story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<131>*/ 		story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<132>*/ 		story_flags[190 /* us: 805A9AED 0x80, jp: 805ACD6D 0x80 */] = true;
/*<133>*/ 		story_flags[211 /* us: 805A9AF0 0x80, jp: 805ACD70 0x80 */] = true;
/*< 81>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
/*< 82>*/ 		story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
/*< 83>*/ 		story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*< 84>*/ 		story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*< 85>*/ 		story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
/*< 86>*/ 		story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*< 87>*/ 		story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*< 88>*/ 		story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<141>*/ 		story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */] = true;
/*<142>*/ 		story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<143>*/ 		story_flags[10 /* us: 805A9AD8 0x08, jp: 805ACD58 0x08 */] = true;
/*<225>*/ 		story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
/*<227>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
/*<223>*/ 		changeScene(1, 0) // 
          	  case 3:
          	}
          }

          void entrypoint_000_013() {
/*<238>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 46}
/*<242>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "")
          }

          void entrypoint_000_014() {
/*<239>*/ 	start()
/*<245>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 244, 'param3': 46}
/*<244>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "")
          }

          void entrypoint_000_015() {
/*<240>*/ 	start()
/*<247>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 246, 'param3': 46}
/*<246>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "")
          }

          void entrypoint_000_016() {
/*<241>*/ 	start()
/*<249>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 248, 'param3': 46}
/*<248>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "")
          }

