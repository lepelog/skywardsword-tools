          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf("Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend Heilungsmaßnahmen zu\nergreifen.<entrypoint_402>")
          		  case 1:
/*<  3>*/ 			printf("Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend, Heilungsmaßnahmen zu\nergreifen.\nUm dich zu unterstützen, habe ich der\n<g<Aurasuche >>das Ziel <y<Herzen >>hinzugefügt.<pling>")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf("Halte \x0E\x02\x04\x02\x22CD gedrückt und wähle im Auswahlmenü\n<y<Herzen >>aus, um das Ziel der Aurasuche zu ändern.\x0E\x01\x11\x02\x8CD\n\n\nIch hoffe, diese Funktion ist nützlich für dich,\nGebieter.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf("Da du das Spiel im <r<Helden-Modus >>spielst,\nerscheinen keine Herzen oder Herz-Blumen.\n\n\nSolltest du jedoch eine <y<Herz-Medaille >>tragen,\n<r<besteht eine geringe Chance>>, dass dennoch\n<pling>Herzen oder Herzblumen erscheinen.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf("Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend Heilungsmaßnahmen zu\nergreifen.<entrypoint_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf("Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend Heilungsmaßnahmen zu\nergreifen.<entrypoint_402>")
          }

          void entrypoint_006_402() {
/*< 15>*/ 	start()
/*<  9>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 10>*/ 		switch (story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */]) {
          		  case 0:
/*< 14>*/ 			switch (adventure_pouch_has(8 0x0008)) {
          			  case 0:
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf("Da du das Spiel im <r<Helden-Modus >>spielst,\nerscheinen keine Herzen oder Herz-Blumen.\n\n\nDu musst Herztränke nutzen, um deine Herzen\nwieder aufzufüllen.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

