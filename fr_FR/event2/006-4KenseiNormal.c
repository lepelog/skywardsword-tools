          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 2, unk: 0, line: 0 */ "Votre énergie vitale est faible.\nJe vous suggère de vous soigner\nau plus vite.<entrypoint_6_402>")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 0, line: 5 */ "Votre énergie vitale diminue.\nJe vous suggère de vous soigner\ndès que vous le pourrez.\n\nAfin que vous puissiez récupérer plus\nfacilement, j'ai ajouté les <sound 4><color yellow<cœurs>coloroff> aux\ncibles localisables grâce à la <color green<fonction\ndétection>coloroff>.")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0, line: 6 */ "Maintenez (C) enfoncé pour afficher\nle menu circulaire, et sélectionnez le\n<color yellow<cœur >coloroff>parmi les cibles possibles.<0x10011:0x06cd>\n\nJ'espère que cela vous sera utile.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0, line: 7 */ "Puisque vous êtes en <color red<mode héroïque>coloroff>,\nvous ne trouverez ni cœurs, ni flœurs.\n\n\nToutefois, vous aurez <color red<une chance >coloroff>d'en\nvoir apparaître si vous portez une\n<sound 4><color yellow<médaille cœur>coloroff>.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "Votre énergie vitale est faible.\nJe vous suggère de vous soigner\nau plus vite.<entrypoint_6_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Votre énergie vitale est faible.\nJe vous suggère de vous soigner\nau plus vite.<entrypoint_6_402>")
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
/*< 11>*/ 				printf(/* textboxtype: 2, unk: 0, line: 1 */ "Puisque vous êtes en <color red<mode héroïque>coloroff>,\nvous ne trouverez ni cœurs, ni flœurs.\nJe vous recommande donc d'utiliser\ndes potions.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

