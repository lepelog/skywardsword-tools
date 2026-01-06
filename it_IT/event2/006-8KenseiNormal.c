          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Tempo di gioco attuale: <color red<<numeric arg0 2>：<numeric arg1 2>>coloroff>\nTempo di gioco totale: <color red<<numeric arg2 2>：<numeric arg3 2>>coloroff>\nNessun'altra informazione disponibile.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 1, line: 6 */ "<0x10012:0x0000000a>Sì, mio signore. Mi avete convocata?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4]<string arg3>")
/*<  4>*/ 	switch (choice(4)) {
          	  case 0:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 1, line: 15 */ "<0x10012:0x0000000a>Sì, mio signore.\nDi cosa preferite che vi parli?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4]<string arg3>")
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

