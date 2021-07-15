          void entrypoint_198_01() {
/*<  8>*/ 	start()
/*< 34>*/ 	printf("")
/*< 12>*/ 	switch (choice(3)) {
          	  case 0:
/*< 36>*/ 		printf("")
/*<143>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*< 10>*/ 		story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*< 11>*/ 		story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = false;
/*<  9>*/ 		changeScene(0, 0) // 
          	  case 1:
/*< 35>*/ 		printf("")
/*<144>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*< 14>*/ 		story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*< 15>*/ 		story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*< 13>*/ 		changeScene(1, 0) // 
          	  case 2:
/*< 37>*/ 		printf("")
          	}
          }

          void entrypoint_198_02() {
/*< 16>*/ 	start()
/*< 38>*/ 	printf("")
/*< 39>*/ 	switch (choice(2)) {
          	  case 0:
/*< 40>*/ 		printf("")
/*<142>*/ 		story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */] = true;
/*< 42>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 43>*/ 		story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*< 17>*/ 		changeScene(2, 0) // 
          	  case 1:
/*< 41>*/ 		printf("")
          	}
          }

          void entrypoint_198_37() {
/*<442>*/ 	start()
/*<443>*/ 	printf("")
/*<445>*/ 	switch (choice(2)) {
          	  case 0:
/*<444>*/ 		printf("")
/*<463>*/ 		printf("")
/*<464>*/ 		printf("")
/*<446>*/ 		printf("")
/*<523>*/ 		printf("")
/*<459>*/ 		printf("")
/*<460>*/ 		printf("")
/*<461>*/ 		printf("")
          	  case 1:
/*<447>*/ 		printf("")
/*<448>*/ 		rupees += 100;
/*<449>*/ 		printf("")
/*<450>*/ 		rupees += -50;
/*<462>*/ 		printf("")
/*<451>*/ 		switch (has_rupees(200)) {
          		  case 0:
/*<455>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 453, 'param3': 12}
/*<453>*/ 			printf("")
/*<457>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 458, 'param3': 12}
/*<458>*/ 			printf("")
          		  case 1:
/*<456>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 452, 'param3': 12}
/*<452>*/ 			printf("")
/*<454>*/ 			give_item(4 0x04);
/*<537>*/ 			printf("")
/*<538>*/ 			give_item(32 0x20);
/*<539>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_198_03() {
/*< 18>*/ 	start()
/*< 44>*/ 	printf("")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
/*< 46>*/ 		printf("")
/*< 19>*/ 		story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
/*< 20>*/ 		changeScene(3, 0) // 
          	  case 1:
/*< 47>*/ 		printf("")
          	}
          }

          void entrypoint_198_20() {
/*<145>*/ 	start()
/*<146>*/ 	printf("")
/*<417>*/ 	story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<418>*/ 	story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<147>*/ 	switch (choice(4)) {
          	  case 0:
/*<150>*/ 		printf("")
/*<148>*/ 		story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
/*<151>*/ 		story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = false;
/*<152>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = false;
/*<149>*/ 		changeScene(4, 0) // 
          	  case 1:
/*<156>*/ 		printf("")
/*<153>*/ 		story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
/*<155>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
/*<157>*/ 		story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = false;
/*<154>*/ 		changeScene(5, 0) // 
          	  case 2:
/*<158>*/ 		story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
/*<533>*/ 		printf("")
/*<161>*/ 		story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*<160>*/ 		story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<162>*/ 		story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<164>*/ 		story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
/*<163>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
/*<159>*/ 		changeScene(4, 0) // 
          	  case 3:
/*<165>*/ 		story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
/*<534>*/ 		printf("")
/*<166>*/ 		story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*<168>*/ 		story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<169>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
/*<167>*/ 		changeScene(5, 0) // 
          	}
          }

          void entrypoint_198_38() {
/*<431>*/ 	start()
/*<432>*/ 	printf("")
/*<437>*/ 	switch (adventure_pouch_has(4 0x0004)) {
          	  case 0:
/*<433>*/ 		printf("")
/*<439>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<440>*/ 			printf("")
          		  case 1:
/*<441>*/ 			printf("")
          		}
          	  case 1:
/*<434>*/ 		printf("")
/*<438>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<435>*/ 			printf("")
          		  case 1:
/*<436>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_198_04() {
/*<  7>*/ 	start()
/*< 48>*/ 	printf("")
/*< 49>*/ 	switch (choice(2)) {
          	  case 0:
/*<131>*/ 		printf("")
/*<132>*/ 		switch (choice(3)) {
          		  case 0:
/*< 51>*/ 			printf("")
/*< 21>*/ 			story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 22>*/ 			story_flags[12 /* us: 805A9AD8 0x20, jp: 805ACD58 0x20 */] = true;
/*< 23>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
/*< 24>*/ 			story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 25>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
/*< 50>*/ 			story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<543>*/ 			story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*< 26>*/ 			changeScene(8, 0) // 
          		  case 1:
/*<140>*/ 			printf("")
/*<133>*/ 			story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*<134>*/ 			story_flags[12 /* us: 805A9AD8 0x20, jp: 805ACD58 0x20 */] = true;
/*<135>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
/*<136>*/ 			story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<137>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
/*<141>*/ 			story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<544>*/ 			story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<552>*/ 			story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<139>*/ 			story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = true;
/*<138>*/ 			changeScene(8, 0) // 
          		  case 2:
          			flw_52:
/*< 52>*/ 			printf("")
          		}
          	  case 1:
          		goto flw_52
          	}
          }

          void entrypoint_198_21() {
/*<170>*/ 	start()
/*<171>*/ 	printf("")
/*<419>*/ 	story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<420>*/ 	story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<172>*/ 	switch (choice(4)) {
          	  case 0:
/*<513>*/ 		story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
/*<535>*/ 		printf("")
/*<515>*/ 		story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*<514>*/ 		story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<516>*/ 		story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<518>*/ 		story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
/*<517>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
/*<520>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<521>*/ 		story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<522>*/ 		story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<519>*/ 		changeScene(5, 0) // 
          	  case 1:
/*<173>*/ 		story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<536>*/ 		printf("")
/*<175>*/ 		story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<176>*/ 		story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<428>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
/*<512>*/ 		story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<531>*/ 		story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<174>*/ 		changeScene(10, 0) // 
          	  case 2:
/*<182>*/ 		printf("")
/*<178>*/ 		story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
/*<179>*/ 		story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<180>*/ 		story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = false;
/*<181>*/ 		story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<429>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
/*<177>*/ 		changeScene(5, 0) // 
          	  case 3:
          	}
          }

          void entrypoint_198_39() {
/*<545>*/ 	start()
/*<546>*/ 	printf("")
/*<547>*/ 	switch (choice(4)) {
          	  case 0:
/*<548>*/ 		give_item(61 0x3D);
          	  case 1:
/*<549>*/ 		give_item(62 0x3E);
          	  case 2:
/*<550>*/ 		give_item(63 0x3F);
          	  case 3:
/*<551>*/ 		give_item(64 0x40);
          	}
          }

          void entrypoint_198_05() {
/*<  6>*/ 	start()
/*< 53>*/ 	printf("")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 73>*/ 		printf("")
/*< 74>*/ 		switch (choice(3)) {
          		  case 0:
/*< 56>*/ 			printf("")
/*< 72>*/ 			story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */] = true;
/*< 71>*/ 			story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 70>*/ 			story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 27>*/ 			changeScene(5, 0) // 
          		  case 1:
/*< 76>*/ 			printf("")
/*< 79>*/ 			story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */] = true;
/*< 78>*/ 			story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 77>*/ 			story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 80>*/ 			story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*< 81>*/ 			story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 75>*/ 			changeScene(5, 0) // 
          		  case 2:
/*<507>*/ 			printf("")
/*<508>*/ 			story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<509>*/ 			story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*<510>*/ 			story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*<511>*/ 			changeScene(12, 0) // 
          		}
          	  case 1:
/*< 57>*/ 		printf("")
          	}
          }

          void entrypoint_198_22() {
/*<185>*/ 	start()
/*<186>*/ 	printf("")
/*<540>*/ 	story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<541>*/ 	story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<187>*/ 	switch (choice(4)) {
          	  case 0:
/*<190>*/ 		printf("")
/*<189>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<188>*/ 		changeScene(1, 0) // 
          	  case 1:
/*<191>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<192>*/ 		changeScene(2, 0) // 
          	  case 2:
/*<197>*/ 		printf("")
/*<193>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<194>*/ 		story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
/*<195>*/ 		story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<196>*/ 		changeScene(1, 0) // 
          	  case 3:
/*<201>*/ 		printf("")
/*<198>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<199>*/ 		story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<200>*/ 		story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<202>*/ 		changeScene(2, 0) // 
          	}
          }

          void entrypoint_198_06() {
/*< 28>*/ 	start()
/*< 59>*/ 	printf("")
/*< 60>*/ 	switch (choice(4)) {
          	  case 0:
/*< 61>*/ 		printf("")
/*< 29>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*< 31>*/ 		story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */] = true;
/*< 30>*/ 		changeScene(6, 0) // 
          	  case 1:
/*<121>*/ 		printf("")
/*<122>*/ 		switch (choice(3)) {
          		  case 0:
/*< 62>*/ 			printf("")
/*< 67>*/ 			story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*< 68>*/ 			story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */] = true;
/*<130>*/ 			story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*< 65>*/ 			story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*< 66>*/ 			changeScene(4, 0) // 
          		  case 1:
/*<123>*/ 			printf("")
/*<126>*/ 			story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<127>*/ 			story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */] = true;
/*<129>*/ 			story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<124>*/ 			story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<125>*/ 			changeScene(10, 0) // 
          		  case 2:
/*<128>*/ 			printf("")
          		}
          	  case 2:
/*< 63>*/ 		printf("")
/*< 69>*/ 		changeScene(9, 0) // 
          	  case 3:
/*< 64>*/ 		printf("")
          	}
          }

          void entrypoint_198_23() {
/*<183>*/ 	start()
/*<184>*/ 	printf("")
/*<542>*/ 	story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<203>*/ 	switch (choice(4)) {
          	  case 0:
/*<204>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<205>*/ 		changeScene(3, 0) // 
          	  case 1:
/*<206>*/ 		story_flags[331 /* us: 805A9AFE 0x02, jp: 805ACD7E 0x02 */] = false;
/*<207>*/ 		changeScene(8, 0) // 
          	  case 2:
/*<208>*/ 		changeScene(13, 0) // 
          	  case 3:
/*<209>*/ 		changeScene(4, 0) // 
          	}
          }

          void entrypoint_198_40() {
/*<346>*/ 	start()
/*<347>*/ 	printf("")
          }

          void entrypoint_198_07() {
/*< 32>*/ 	start()
/*< 54>*/ 	printf("")
/*< 82>*/ 	switch (choice(4)) {
          	  case 0:
/*< 83>*/ 		printf("")
/*< 84>*/ 		switch (choice(4)) {
          		  case 0:
/*< 85>*/ 			printf("")
/*< 33>*/ 			changeScene(4, 0) // 
          		  case 1:
/*< 93>*/ 			story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 94>*/ 			story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*< 95>*/ 			story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
/*< 96>*/ 			story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 86>*/ 			printf("")
/*< 90>*/ 			changeScene(4, 0) // 
          		  case 2:
/*< 99>*/ 			story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*<100>*/ 			story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<101>*/ 			story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
/*<102>*/ 			story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*<103>*/ 			story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
/*<104>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
/*<105>*/ 			story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<532>*/ 			story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = true;
/*< 97>*/ 			printf("")
/*< 98>*/ 			changeScene(13, 0) // 
          		  case 3:
/*< 87>*/ 			printf("")
          		}
          	  case 1:
/*< 88>*/ 		printf("")
/*< 91>*/ 		story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*< 92>*/ 		changeScene(4, 0) // 
          	  case 2:
/*<108>*/ 		story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*<109>*/ 		story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<110>*/ 		story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
/*<111>*/ 		story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*<112>*/ 		story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
/*<113>*/ 		story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
/*<114>*/ 		story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<115>*/ 		story_flags[295 /* us: 805A9AFD 0x02, jp: 805ACD7D 0x02 */] = true;
/*<116>*/ 		story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
/*<117>*/ 		story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */] = true;
/*<106>*/ 		printf("")
/*<107>*/ 		changeScene(8, 0) // 
          	  case 3:
/*< 89>*/ 		printf("")
          	}
          }

          void entrypoint_198_24() {
/*<210>*/ 	start()
/*<211>*/ 	printf("")
/*<212>*/ 	switch (choice(4)) {
          	  case 0:
/*<213>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<214>*/ 		printf("")
          	  case 1:
/*<424>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<215>*/ 		story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */] = true;
/*<216>*/ 		printf("")
          	  case 2:
/*<426>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<425>*/ 		story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */] = true;
/*<217>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<218>*/ 		printf("")
          	  case 3:
          	}
          }

          void entrypoint_198_41() {
/*<348>*/ 	start()
/*<349>*/ 	printf("")
          }

          void entrypoint_198_08() {
          	start()
/*< 55>*/ 	printf("")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<118>*/ 		printf("")
/*<  1>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<  2>*/ 		story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<  3>*/ 		story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*<  4>*/ 		story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*<  5>*/ 		changeScene(7, 0) // 
          	  case 1:
/*<119>*/ 		printf("")
          	}
          }

          void entrypoint_198_25() {
/*<219>*/ 	start()
/*<220>*/ 	printf("")
/*<221>*/ 	switch (choice(4)) {
          	  case 0:
/*<223>*/ 		story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = false;
/*<224>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = false;
/*<222>*/ 		changeScene(18, 0) // 
          	  case 1:
/*<225>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = false;
/*<226>*/ 		changeScene(9, 0) // 
          	  case 2:
/*<227>*/ 		story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
/*<228>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<229>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<230>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = false;
/*<231>*/ 		changeScene(18, 0) // 
          	  case 3:
/*<232>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*<233>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<234>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<235>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = false;
/*<236>*/ 		changeScene(9, 0) // 
          	}
          }

          void entrypoint_198_42() {
/*<350>*/ 	start()
/*<351>*/ 	printf("")
          }

          void entrypoint_198_26() {
/*<237>*/ 	start()
/*<238>*/ 	printf("")
/*<239>*/ 	switch (choice(4)) {
          	  case 0:
/*<427>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<241>*/ 		story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */] = true;
/*<242>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<243>*/ 		story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
/*<244>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<245>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<246>*/ 		story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = false;
/*<240>*/ 		changeScene(19, 0) // 
          	  case 1:
/*<249>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<247>*/ 		story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */] = true;
/*<248>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<250>*/ 		story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<251>*/ 		story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = false;
/*<421>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<422>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<423>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = false;
/*<252>*/ 		changeScene(9, 0) // 
          	  case 2:
/*<258>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<253>*/ 		story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */] = true;
/*<254>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<255>*/ 		story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
/*<256>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<257>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<259>*/ 		story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<260>*/ 		story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<261>*/ 		story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
/*<262>*/ 		printf("")
          	  case 3:
/*<268>*/ 		story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */] = true;
/*<263>*/ 		story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */] = true;
/*<264>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<265>*/ 		story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
/*<266>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<267>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<269>*/ 		story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<270>*/ 		story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<271>*/ 		story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = false;
/*<272>*/ 		printf("")
          	}
          }

          void entrypoint_198_43() {
/*<465>*/ 	start()
/*<467>*/ 	{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': -256, 'next': 466, 'param3': 13}
/*<466>*/ 	printf("")
/*<468>*/ 	printf("")
/*<469>*/ 	printf("")
/*<470>*/ 	printf("")
/*<471>*/ 	rupees += 30;
/*<472>*/ 	printf("")
/*<473>*/ 	printf("")
/*<474>*/ 	printf("")
/*<475>*/ 	printf("")
/*<476>*/ 	printf("")
          }

          void entrypoint_198_09() {
/*<479>*/ 	start()
/*<480>*/ 	printf("")
/*<481>*/ 	switch (choice(3)) {
          	  case 0:
/*<482>*/ 		printf("")
/*<485>*/ 		switch (choice(4)) {
          		  case 0:
/*<486>*/ 			printf("")
/*<495>*/ 			story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */] = true;
/*<502>*/ 			changeScene(11, 0) // 
          		  case 1:
/*<487>*/ 			printf("")
/*<496>*/ 			story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<503>*/ 			changeScene(11, 0) // 
          		  case 2:
/*<488>*/ 			printf("")
/*<497>*/ 			story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<504>*/ 			changeScene(11, 0) // 
          		  case 3:
/*<493>*/ 			printf("")
          		}
          	  case 1:
/*<483>*/ 		printf("")
/*<489>*/ 		switch (choice(4)) {
          		  case 0:
/*<490>*/ 			printf("")
/*<498>*/ 			story_flags[67 /* us: 805A9ADF 0x40, jp: 805ACD5F 0x40 */] = true;
/*<505>*/ 			changeScene(11, 0) // 
          		  case 1:
/*<491>*/ 			printf("")
/*<499>*/ 			story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<506>*/ 			changeScene(11, 0) // 
          		  case 2:
/*<492>*/ 			printf("")
/*<500>*/ 			story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*<501>*/ 			changeScene(11, 0) // 
          		  case 3:
/*<494>*/ 			printf("")
          		}
          	  case 2:
/*<484>*/ 		printf("")
          	}
          }

          void entrypoint_198_27() {
/*<294>*/ 	start()
/*<295>*/ 	printf("")
/*<296>*/ 	switch (choice(4)) {
          	  case 0:
/*<297>*/ 		story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
/*<298>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<299>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<300>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<306>*/ 		story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
/*<307>*/ 		story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
/*<308>*/ 		story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = false;
/*<304>*/ 		changeScene(18, 0) // 
          	  case 1:
/*<301>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*<302>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<303>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<317>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<318>*/ 		story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<319>*/ 		story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<320>*/ 		story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
/*<322>*/ 		story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
/*<321>*/ 		story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = false;
/*<305>*/ 		changeScene(9, 0) // 
          	  case 2:
/*<309>*/ 		story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
/*<310>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<311>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<312>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<314>*/ 		story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = false;
/*<315>*/ 		story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
/*<316>*/ 		story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = false;
/*<313>*/ 		changeScene(18, 0) // 
          	  case 3:
/*<323>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*<324>*/ 		story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */] = true;
/*<325>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<327>*/ 		story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<328>*/ 		story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<329>*/ 		story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<330>*/ 		story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
/*<332>*/ 		story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = false;
/*<331>*/ 		story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = false;
/*<326>*/ 		changeScene(9, 0) // 
          	}
          }

          void entrypoint_198_44() {
/*<477>*/ 	start()
/*<478>*/ 	printf("")
          }

          void entrypoint_198_28() {
/*<430>*/ 	start()
/*<273>*/ 	printf("")
/*<274>*/ 	switch (choice(4)) {
          	  case 0:
/*<276>*/ 		printf("")
/*<277>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<278>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<279>*/ 		story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = false;
/*<280>*/ 		story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = false;
/*<275>*/ 		changeScene(0, 0) // 
          	  case 1:
/*<282>*/ 		printf("")
/*<283>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<284>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<285>*/ 		story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
/*<286>*/ 		story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = false;
/*<281>*/ 		changeScene(0, 0) // 
          	  case 2:
/*<288>*/ 		printf("")
/*<289>*/ 		story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<290>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<291>*/ 		story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
/*<292>*/ 		story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
/*<293>*/ 		story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = false;
/*<287>*/ 		changeScene(0, 0) // 
          	  case 3:
          	}
          }

          void entrypoint_198_29() {
/*<333>*/ 	start()
/*<334>*/ 	printf("")
/*<335>*/ 	switch (choice(4)) {
          	  case 0:
/*<336>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*<344>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = false;
/*<343>*/ 		changeScene(6, 0) // 
          	  case 1:
/*<341>*/ 		printf("")
/*<345>*/ 		story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */] = true;
/*<337>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
/*<339>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = false;
/*<340>*/ 		story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = false;
/*<342>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = false;
/*<338>*/ 		changeScene(7, 0) // 
          	  case 2:
          	  case 3:
          	}
          }

          void entrypoint_198_30() {
/*<356>*/ 	start()
/*<357>*/ 	printf("")
/*<358>*/ 	switch (choice(4)) {
          	  case 0:
/*<359>*/ 		story_flags[143 /* us: 805A9AEE 0x02, jp: 805ACD6E 0x02 */] = false;
/*<361>*/ 		story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = false;
/*<360>*/ 		changeScene(20, 0) // 
          	  case 1:
/*<365>*/ 		story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<524>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<364>*/ 		changeScene(21, 0) // 
          	  case 2:
/*<363>*/ 		story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */] = true;
/*<525>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<362>*/ 		changeScene(11, 0) // 
          	  case 3:
/*<367>*/ 		story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<368>*/ 		story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
/*<369>*/ 		story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
/*<370>*/ 		story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<371>*/ 		story_flags[143 /* us: 805A9AEE 0x02, jp: 805ACD6E 0x02 */] = true;
/*<372>*/ 		story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */] = true;
/*<526>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<366>*/ 		changeScene(22, 0) // 
          	}
          }

          void entrypoint_198_31() {
/*<373>*/ 	start()
/*<374>*/ 	printf("")
/*<375>*/ 	switch (choice(4)) {
          	  case 0:
/*<376>*/ 		printf("")
          	  case 1:
/*<377>*/ 		story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<378>*/ 		story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<379>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = true;
/*<380>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<527>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<385>*/ 		changeScene(23, 0) // 
          	  case 2:
/*<381>*/ 		story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<382>*/ 		story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<383>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = true;
/*<384>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<528>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<386>*/ 		changeScene(12, 0) // 
          	  case 3:
/*<387>*/ 		printf("")
          	}
          }

          void entrypoint_198_32() {
/*<388>*/ 	start()
/*<389>*/ 	printf("")
/*<390>*/ 	switch (choice(4)) {
          	  case 0:
/*<391>*/ 		story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */] = true;
/*<392>*/ 		story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<393>*/ 		story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<394>*/ 		story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*<395>*/ 		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
/*<400>*/ 		story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */] = true;
/*<396>*/ 		story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */] = true;
/*<397>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = false;
/*<399>*/ 		story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */] = true;
/*<403>*/ 		story_flags[143 /* us: 805A9AEE 0x02, jp: 805ACD6E 0x02 */] = true;
/*<398>*/ 		changeScene(15, 0) // 
          	  case 1:
/*<404>*/ 		story_flags[143 /* us: 805A9AEE 0x02, jp: 805ACD6E 0x02 */] = true;
/*<405>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = true;
/*<406>*/ 		story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */] = true;
/*<529>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<407>*/ 		changeScene(16, 0) // 
          	  case 2:
/*<408>*/ 		story_flags[143 /* us: 805A9AEE 0x02, jp: 805ACD6E 0x02 */] = true;
/*<415>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = true;
/*<416>*/ 		story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */] = true;
/*<530>*/ 		story_flags[148 /* us: 805A9AEE 0x40, jp: 805ACD6E 0x40 */] = true;
/*<401>*/ 		changeScene(17, 0) // 
          	  case 3:
/*<402>*/ 		printf("")
          	}
          }

          void entrypoint_198_33() {
/*<409>*/ 	start()
/*<410>*/ 	printf("")
/*<411>*/ 	switch (choice(4)) {
          	  case 0:
/*<414>*/ 		story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*<413>*/ 		story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */] = true;
/*<412>*/ 		changeScene(11, 0) // 
          	  case 1:
          	  case 2:
          	  case 3:
          	}
          }

          void entrypoint_198_34() {
/*<354>*/ 	start()
/*<352>*/ 	printf("")
/*<353>*/ 	switch (choice(4)) {
          	  case 0:
/*<355>*/ 		changeScene(14, 0) // 
          	  case 1:
          	  case 2:
          	  case 3:
          	}
          }

