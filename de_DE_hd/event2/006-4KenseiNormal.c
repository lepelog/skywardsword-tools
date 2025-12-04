          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 2, unk: 0, line: 0 */ "Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend Heilungsmaßnahmen zu\nergreifen.<entrypoint_6_402>")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend, Heilungsmaßnahmen zu\nergreifen.\nUm dich zu unterstützen, habe ich der\n<color green<Aurasuche >coloroff>das Ziel <color yellow<Herzen >coloroff>hinzugefügt.<sound 4>")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0, line: 6 */ "Halte <icon 34> gedrückt und wähle im Auswahlmenü\n<color yellow<Herzen >coloroff>aus, um das Ziel der Aurasuche zu ändern.<0x10011:0x08cd>\n\n\nIch hoffe, diese Funktion ist nützlich für dich,\nGebieter.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 2, line: 7 */ "Da du das Spiel im <color red<Helden-Modus >coloroff>spielst,\nerscheinen keine Herzen oder Herz-Blumen.\n\n\nSolltest du jedoch eine <color yellow<Herz-Medaille >coloroff>tragen,\n<color red<besteht eine geringe Chance>coloroff>, dass dennoch\n<sound 4>Herzen oder Herzblumen erscheinen.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend Heilungsmaßnahmen zu\nergreifen.<entrypoint_6_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Gebieter, deine Herzen haben sich\ndramatisch verringert. Ich rate dir,\ndringend Heilungsmaßnahmen zu\nergreifen.<entrypoint_6_402>")
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
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "Da du das Spiel im <color red<Helden-Modus >coloroff>spielst,\nerscheinen keine Herzen oder Herz-Blumen.\n\n\nDu musst Herztränke nutzen, um deine Herzen\nwieder aufzufüllen.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

