          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich muss dir leider mitteilen, dass eine\nRückkehr ins Wolkenmeer mithilfe eines amiibo\nderzeit nicht möglich ist.")
          		  case 1:
/*< 22>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter, es gibt derzeit keinen festgelegten Ort,\nan den du zurückkehren kannst.\n\n\nEine Rückkehr mithilfe eines amiibo ist nur möglich,\nwenn man zuvor von einem bestimmten Ort mit dem\namiibo ins Wolkenmeer aufgestiegen ist.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich muss dir leider mitteilen, dass eine\nRückkehr ins Wolkenmeer mithilfe eines amiibo\nderzeit nicht möglich ist.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter, es scheint, als wäre die Nutzung von\namiibo in der derzeitigen Situation nicht möglich.\n\n\nSobald sich die Situation ändert, besteht die\nMöglichkeit, dass amiibo wieder verwendet\nwerden können.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf("Sehr gut, \x0E\x01\x12\x04\x00\x05Gebieter, das amiibo wurde erkannt.\nMöchtest du nun ins Wolkenmeer zurückkehren?\n[1]Ja [2-]Nein")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf("Ausgezeichnet, \x0E\x01\x12\x04\x00\x05Gebieter, das amiibo wurde erkannt.\n\n\n\nMöchtest du nun an folgenden Ort zurückkehren:\n<string arg0>?\n[1]Ja [2-]Nein")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter, dieses amiibo kann leider nicht von mir\nerkannt werden.")
          		  case 3:
/*< 19>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter, beim Lesen des amiibo ist ein Fehler\naufgetreten. Wollen wir es noch einmal versuchen?\n[1]Ja [2-]Nein")
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
/*< 24>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, nachdem du Zugriff auf die Steinstatue\nerlangt hast, ist es dir nun möglich, ins Wolkenmeer\nzurückzukehren.\n\nAußerdem kannst du mithilfe eines <r<bestimmten\namiibo >>von jedem Ort im Erdland ins Wolkenmeer\naufsteigen und wieder an den Ort zurückkehren. Bitte\nrufe mich, wenn du das amiibo verwenden möchtest.\nIn den <g<Optionen>> kannst du die Nutzung von amiibo\naktivieren oder deaktivieren.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Momentane Spielzeit: <r<\x0E\x02\x03\x06\x00\x00\x2CD>>:<r<<numeric arg1(2)>>>\nGesamtspielzeit: <r<<numeric arg2(2)>>>:<r<\x0E\x02\x03\x06\x00\x03\x2CD>>")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("Du hast mich gerufen, \x0E\x01\x12\x04\x00\nGebieter?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf("Worüber möchtest du etwas erfahren, \x0E\x01\x12\x04\x00\nGebieter?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
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

