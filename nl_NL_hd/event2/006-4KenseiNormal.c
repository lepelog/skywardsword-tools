          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf("U bent ernstig gewond. Zorg dat u uw\nhartjes spoedig aanvult.<entrypoint_402>")
          		  case 1:
/*<  3>*/ 			printf("U bent ernstig gewond. Zorg dat u uw\nhartjes spoedig aanvult.\n\n\nOm u te helpen meer <y<hartjes >>te vinden\nheb ik ze toegevoegd als doel voor de\n<g<detectiefunctie>>.<pling>")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf("Houd \x0E\x02\x04\x02\x22CD ingedrukt en selecteer <y<hartjes\n>>om ze als uw huidige doel te kiezen.\x0E\x01\x11\x02\x8CD Hier\nzult u vast veel baat bij hebben.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf("U heeft ervoor gekozen de <r<Heldenstand\n>>te activeren. Zolang deze stand actief is,\nzullen er geen hartjes of hartsbloemen\nverschijnen.\nAls u echter de <y<levensmedaille >>draagt,\n<r<bestaat er wel een kans dat u <pling>toch hartjes\nen hartsbloemen vindt>>.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf("U bent ernstig gewond. Zorg dat u uw\nhartjes spoedig aanvult.<entrypoint_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf("U bent ernstig gewond. Zorg dat u uw\nhartjes spoedig aanvult.<entrypoint_402>")
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
/*< 11>*/ 				printf("U heeft gekozen voor de <r<Heldenstand>>.\nIn deze stand zullen er geen hartjes of\nhartsbloemen verschijnen.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

