          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf("Votre énergie vitale est faible.\nJe vous suggère de vous soigner\nau plus vite.<entrypoint_402>")
          		  case 1:
/*<  3>*/ 			printf("Votre énergie vitale diminue.\nJe vous suggère de vous soigner\ndès que vous le pourrez.\n\nAfin que vous puissiez récupérer plus\nfacilement, j'ai ajouté les <pling><y<c\x153urs>> aux\ncibles localisables grâce à la <g<fonction\ndétection>>.")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf("Maintenez (C) enfoncé pour afficher\nle menu circulaire, et sélectionnez le\n<y<c\x153ur >>parmi les cibles possibles.\x0E\x01\x11\x02\x6CD\n\nJ'espère que cela vous sera utile.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf("Puisque vous êtes en <r<mode héroïque>>,\nvous ne trouverez ni c\x153urs, ni fl\x153urs.\n\n\nToutefois, vous aurez <r<une chance >>d'en\nvoir apparaître si vous portez une\n<pling><y<médaille c\x153ur>>.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf("Votre énergie vitale est faible.\nJe vous suggère de vous soigner\nau plus vite.<entrypoint_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf("Votre énergie vitale est faible.\nJe vous suggère de vous soigner\nau plus vite.<entrypoint_402>")
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
/*< 11>*/ 				printf("Puisque vous êtes en <r<mode héroïque>>,\nvous ne trouverez ni c\x153urs, ni fl\x153urs.\nJe vous recommande donc d'utiliser\ndes potions.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

