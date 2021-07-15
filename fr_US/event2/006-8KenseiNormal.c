          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Votre temps de jeu pour cette session\nest de <r<\x0E\x02\x03\x06\x00\x00\x2CD h <numeric arg1(2)>>>. Votre temps de jeu\ntotal est de <r<<numeric arg2(2)> h \x0E\x02\x03\x06\x00\x03\x2CD>>.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x12\x04\x00\nOui, Maître.\nQue puis\x2010je faire pour vous?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
/*<  4>*/ 	switch (choice(4)) {
          	  case 0:
/*<  6>*/ 		printf("\x0E\x01\x12\x04\x00\nTrès bien, Maître. À quel sujet puis\x2010je\nvous renseigner?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
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
          	}
          }

