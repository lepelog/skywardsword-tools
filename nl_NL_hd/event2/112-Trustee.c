          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	wait_frames(1)
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hallo... en welkom bij de voorwerpen-\nbank. Wil je iets uit je buidel bij ons\nopslaan? Oké. Wil je iets uit de opslag\nhalen? Ook geen probleem.\nDus... wil je de voorwerpenbank\ngebruiken?\n[1-]Ja.[2]Nee.")
          		flw_4:
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
/*< 16>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 42>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 61>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 62>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_43:
/*< 43>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 44>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>O, wauw. Zo te zien heb je al heel veel\nspullen opgeslagen, liefje.\n\n\nMijn kasten zijn, net als mijn hart,\nboordevol door jou!\n\n\nJe kunt beter een paar dingen weghalen\nom te <color red<verkopen >coloroff>of zo, oké?")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a0c>Geen haast, liefje!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000017>Eh... Even kijken, hoor. Ja, sorry, ik heb\ngeen ruimte voor je spullen.\n\n\nJe geeft me niet je hart, maar enkel\nrommel die je niet rond wilt sjouwen.\nRomantisch, hoor...\n\nGrapje, grapje. Maar ik heb echt geen\nruimte, dus doe me een lol en <color red<verkoop\n>coloroff>wat van je spullen of zo.")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000013>Oké, kom maar op.")
          								goto flw_5
          							}
          						}
          					  case 1:
          						goto flw_43
          					}
          				  case 1:
/*< 90>*/ 					switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          					  case 0:
/*< 91>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 93>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000015>Kijk, ik wil dolgraag wat dingen voor\nje opslaan, maar we hebben hier geen\nbodemloze ton om het allemaal in te\ngooien. Er is geen plek voor.\nKun je niet wat spullen <color red<verkopen >coloroff>of iets\nanders doen om ruimte vrij te maken?")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000015>Geweldig. Zeg het maar!")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000004>Kijk, ik wil dolgraag wat van je spullen\nopslaan, maar ik heb er geen plek voor.\n\n\n<color red<Verkoop >coloroff>wat spullen of doe iets anders om\nruimte vrij te maken, oké?")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000003>Prima. Laat maar zien.")
          							goto flw_5
          						}
          					}
          				}
          			  case 1:
/*< 51>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 59>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 60>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Luister, liefje, je hebt niks dat ik kan\nopslaan.\n\n\nKom maar terug nadat je wat meer geluk\nhebt gehad, oké? Oké.")
          						  case 1:
/*< 55>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>Je hebt niks om hier op te slaan.\n\n\n\nKom maar terug zodra je wat spullen\nhebt. Doeiiii.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Ik zeg het niet graag, maar je hebt niks\ndat ik voor je op kan slaan.\n\n\nKom maar terug als je wat spullen hebt,\noké?")
          				}
          			}
          		  case 1:
/*< 50>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 56>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 57>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_47:
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000e150c>Zeg, liefje, het is niet aardig om iemand\ndie zich kapot verveelt zo te plagen.")
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000013>Ben je hier alleen om met mij te praten?\nOmdat je me beeldschoon vindt? En niet\nkunt leven zonder mij?")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000017>Hou je me nou voor de gek? Val me niet\nlastig als ik toch niks voor je kan doen.\nSerieus!")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000002>Waar slaat dat op? Laat me met rust als\nje hier toch niks te doen hebt. Echt níét\nnormaal.")
          					  case 1:
/*<  3>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>O, echt waar? Fijn. Gelukkig heb\nik niks beter te doen of zo...")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_112_02() {
/*<  6>*/ 	start()
/*< 41>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 69>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 70>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000007>O, wauw. Mijn hele opslag is vol!\n\n\n\nLiefje, kun je de spullen die je niet nodig hebt,\nalsjeblieft <color red<verkopen >coloroff>of weggooien? Om mij een\nplezier te doen?")
          				  case 1:
/*< 68>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b1709>Tot de volgende keer! Hihi!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Nou, mooi, hoor... Ik heb geen ruimte meer in\nmijn opslag.\n\n\nHelp me eens even, oké? <color red<Verkoop >coloroff>wat spullen\ndie je niet nodig hebt, of gooi ze weg of zo.")
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000015>Vergeet niet: je mag áltijd langskomen om me\nte vertellen hoe mooi ik ben en zo.")
          				}
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 25>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000015>Hé, je spullen nemen mijn hele opslag in beslag.\n\n\n\nKun je alsjeblieft iets doen met de dingen die je\nniet nodig hebt, ze <color red<verkopen >coloroff>of zo?")
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000004>Hé, mijn hele opslag ligt vol met jouw spullen!\n\n\n\nIk heb nergens anders plek voor, dus je kunt\nmaar beter wat spullen <color red<verkopen >coloroff>of wegdoen.")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000006>Bedankt. Tot ziens...")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>Oké. Bedankt. Tot ziens...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ik koop dat van je voor <color red<<numeric arg0 0> <0x30004:0x01cd>>coloroff>!\n\n\n\nHebben we een deal?\n[1-]Oké.[2]Nee, bedankt.")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			wait_frames(30)
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>Bedankt! Je hebt vast nog veel meer\ndingen die je hier op wilt slaan. Doe maar\nrustig aan, liefje. Neem je tijd.")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Bedankt. Was dat alles?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000003>Bedankt. Kan ik nog iets voor je doen?")
          				goto flw_53
          			}
          		  case 1:
/*< 37>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_38:
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000012>O, goed zo, liefje! Wat ben jij een\nslimmerik!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000014>Nee, bedankt? Je laat deze deal gaan,\nzoals je mij hebt laten gaan? Ja, de\nboodschap komt over...")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "Nee, bedankt? Oké, prima. Moet je zelf\nweten.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Hm... Daar geef ik je <color red<<numeric arg0 0> <0x30004:0x01cd>>coloroff> voor.\n\n\n\nWat zeg je ervan?\n[1-]Oké![2]Nee.")
          		goto flw_11
          	}
          }

          void entrypoint_112_04() {
/*< 14>*/ 	start()
/*< 34>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 80>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 81>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_82:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Luister, liefje, je hebt niks dat ik kan\nopslaan.\n\n\nKom maar terug nadat je wat meer geluk\nhebt gehad, oké? Oké.")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>Je hebt niks om hier op te slaan.\n\n\n\nKom maar terug zodra je wat spullen\nhebt. Doeiiii.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Ik zeg het niet graag, maar je hebt niks\ndat ik voor je op kan slaan.\n\n\nKom maar terug als je wat spullen hebt,\noké?")
          	}
          }

          void entrypoint_112_05() {
/*< 21>*/ 	start()
/*< 32>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 84>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 85>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_33:
/*< 33>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000008>Is het tijd voor de grote schoonmaak?\nHihi!\n\n\nMet die knop kun je de dingen die je\nhier hebt opgeslagen, op orde brengen.\n\n\nDan worden, bijvoorbeeld, de pijlen in je\npijlkoker netjes gesorteerd.")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000004>Je wilt je spullen ordenen?\n\n\n\nMet die knop kun je de spullen die je hebt\nopgeslagen, organiseren.\n\n\nJe kunt er je pijlen in je pijlkoker mee\nsorteren en zo.")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000004>O, wil je je spullen ordenen?\n\n\n\nAls je die optie kiest, kun je dat\ninderdaad doen.\n\n\nDan worden, bijvoorbeeld, de pijlen in je\npijlkoker netjes gesorteerd.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

