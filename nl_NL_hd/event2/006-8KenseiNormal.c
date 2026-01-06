          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000001>Meester, het spijt me. Ik moet u helaas\nmeedelen dat de huidige omstandigheden\nons niet toestaan terug te keren naar het\nhemelrijk door middel van een amiibo.")
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10012:0x00000001>Meester, er is op dit moment geen punt\nom naar terug te keren.\n\n\nEnkel wanneer u een amiibo gebruikt hebt\nom op te stijgen naar het hemelrijk, kunt u de\namiibo nogmaals gebruiken om naar dat\npunt terug te keren.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000001>Meester, het spijt me. Ik moet u helaas\nmeedelen dat de huidige omstandigheden\nons niet toestaan terug te keren naar het\nhemelrijk door middel van een amiibo.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10012:0x00000001>Meester, het lijkt op het moment niet mogelijk\nom amiibo-figuren te gebruiken.\n\n\nU dient een oplossing te vinden voor de\nhuidige situatie zodat het gebruik van\namiibo-figuren niet langer wordt verhinderd.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x00000005>Meester, de amiibo is herkend. Wilt u\nterugkeren naar het hemelrijk?\n[1-]Ja.[2]Nee.")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10012:0x00000005>Meester, de amiibo is herkend.\n\n\n\nBent u klaar om terug te keren naar\nde locatie '<string arg0>'?\n[1-]Ja.[2]Nee.")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf(/* textboxtype: 0, unk: 2, line: 22 */ "<0x10012:0x00000001>Meester, het spijt me, maar dit is geen amiibo die ik\nkan herkennen.")
          		  case 3:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000001>Meester, er is een fout opgetreden bij het\nlezen van de amiibo. Zal ik het nogmaals\nproberen?\n[1-]Ja.[2]Nee.")
/*< 20>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_10
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_811() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10012:0x00000001>Meester, nu u dit vogelbeeld heeft geactiveerd, kunt\nu het gebruiken om terug te keren naar het\nhemelrijk.\n\nDaarnaast is er een <color red<bepaalde amiibo>coloroff> waarmee u\nvanaf iedere plaats op het oppervlak naar het\nhemelrijk kunt reizen. Vervolgens kunt u op\ndezelfde plaats op het oppervlak terugkeren.\nU kunt mij om hulp vragen als u amiibo\nwilt gebruiken.\n\n\nU kunt het gebruik van amiibo ook activeren\nof deactiveren in de <color green<instellingen>coloroff>.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Huidige speeltijd: <color also red<<color red<<numeric arg0 2><color also red<：<color red<<numeric arg1 2><color also red<\n>coloroff>Totale speeltijd: <color also red<<color red<<numeric arg2 2><color also red<：<color red<<numeric arg3 2><color also red<>coloroff>\nGeen verdere informatie.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x0000000a>Heeft u mij geroepen, meester?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4-]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000a>Goed, meester. Met wat voor informatie kan ik u van\ndienst zijn?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4]<string arg3>")
/*<  7>*/ 		switch (choice(4)) {
          		  case 0:
          			flw_8:
/*<  8>*/ 			entrypoint_-01_-1();
          		  case 1:
          			goto flw_8
          		  case 2:
          			goto flw_8
          		  case 3:
          		}
          	  case 1:
          		flw_5:
/*<  5>*/ 		entrypoint_-01_-1();
          	  case 2:
          		goto flw_5
          	  case 3:
          		goto flw_5
          	  case 4:
          	}
          }

