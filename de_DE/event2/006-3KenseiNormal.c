          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0, line: 134 */ "Du nimmst an einer Herausforderung\nin <color blue<Ranelles Heldenschule >coloroff>teil.\n\n\nEine Analyse der Umgebung ist deshalb\nnicht möglich.")
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "Du befindest dich im <color blue<Siegelhain>coloroff>. Ich\nspüre die Auren einer kleinen Anzahl\nschwacher Wesen, die dir feindlich\ngesinnt sind.")
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 0, line: 158 */ "<0x10012:0x00000001>Gebieter, dein Ausrüstungs-Typ ist\ngegenwärtig „<string arg0>“.")
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 159 */ "Deine Anpassung an diese Umgebung\nbeträgt <numeric arg0 0> %.")
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 54 */ "Dein Schwert ist als Waffe für den\nKampf völlig ausreichend.\n\n\nIch schlage vor, Items auszurüsten,\ndie nicht direkt im Kampf eingesetzt\nwerden.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 2, unk: 0, line: 141 */ "Ich halte zudem den Einsatz des\nHolzschildes in diesem Gebiet für\nunangebracht,<pause 15> da er den Flammen\nnicht standhalten kann.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 135 */ "Ich habe keine Informationen für dich.")
          }

