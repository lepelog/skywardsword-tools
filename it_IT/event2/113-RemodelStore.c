          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<code di lucertola>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<code di lucertola>coloroff> si possono ottenere\nda mostri simili alle lucertole.")
/*<178>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>Ehi, giovanotto!\nMa manca il prezioso <color yellow<metallo di Oldin>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nil <color yellow<metallo di Oldin >coloroff>si può estrarre dalle\nprofondità della montagna di fuoco.")
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000e0e0c>Ehi, giovanotto!\nMa mancano i preziosi <color yellow<fiori antichi>coloroff>!\n\n\nSecondo i testi antichi, i <color yellow<fiori antichi\n>coloroff>fioriscono in territori sabbiosi, dai\ntempi più remoti. Li abbiamo usati per\nriparare Salbot.")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>Ehi, giovanotto!\nMa mancano i preziosi <color yellow<fiori antichi>coloroff>!\n\n\nSecondo i testi antichi, i <color yellow<fiori antichi>coloroff>,\ndai tempi più remoti, fioriscono in\nterritori sabbiosi. Mi chiedo se esistano\ndavvero!")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x00000003>Ehi! Giovane!\nCome sta Salbot? \nHai qualcosa da potenziare?\n[1-]Potenzia[2-]Ripara[3]Niente")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000009>Benissimo!\nMa al momento posso potenziare\nsolo questi strumenti!")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Ehi! Giovanotto! Ma non hai nessuno\nstrumento da potenziare...\nperché non vai alla bottega degli arnesi\na comprarne qualcuno?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>Vuoi che ripari questo scudo?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x000e0e0c>Ma come?\nNon hai nessuno scudo da riparare?\n\n\nUn po' di rispetto per le\npersone più grandi, giovanotto!")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>E allora perché sei qui?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00001104>Allora, ti affido il mio <color blue<Salbot>coloroff>!\nSai, è in grado di rilevare le onde\ncerebrali emesse dagli umani...\n\n<0x10009:0x00080700>Questo significa che sa \nraggiungerti ovunque tu sia!\nL'unico problema è che a volte\nè un po' maleducato...\nMa tu porta pazienza e vedrai che\nfarà quello che gli chiedi!\n<pause 30>Ma ho parlato troppo!")
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 1, line: 112 */ "<0x10009:0x00070700>Allora, vuoi che ti\npotenzi qualcosa?\nO ti riparo lo scudo?\n[1-]Potenzia[2-]Ripara[3]Niente")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000003>Ehi! Giovane!\nChe succede? Hai l'aria\nda cane bastonato...\n\nAh? Volevi chiedermi\nqualcosa?\n[1-]Sì[2]No, niente")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000001>Per far funzionare\n<color blue<Salbot>coloroff> serve il <color yellow<fiore antico>coloroff>!\nMa non ho idea di dove trovarlo...\n[1-]Eccolo![2]Neanch'io")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00070717>Cosa?\nTu ce l'hai?! È fantastico!!!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>Tu<0x10006:0xfdcd>...<0x10006:0x00cd>\nFai finta di averlo e poi non ce l'hai!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000018>Ah... questo sarebbe il <color yellow<fiore antico>coloroff>?!\nMa è vero! Dalle radici esce una\nspecie di olio!\n\nAdesso possiamo riparare <color blue<Salbot>coloroff>!\n\n\n\n<0x10009:0x00070700>Aspetta un attimo... mi metto\nsubito all'opera!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x000f0916>Uhm... Neanche tu ne sai qualcosa...?\nChe sarà mai questo <color yellow<fiore antico>coloroff>...?")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00101008>Eh? <pause 40>Il robot del nonno?\n\n\n\n<0x10009:0x00000e00>Questa dev'essere un'altra delle\ntue battute... sei venuto qui\nper scherzare?\n\nFai sul serio?<pause 40>\nTi serve per ripescare una cosa che\nti è caduta al di sotto delle nuvole?\n\n<0x10009:0x00070700>Allora anche tu credi alle storie\ndel nonno?!")
/*< 53>*/ 						printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000d0900>Mi fa piacere che qualcun altro\nci creda, però non posso aiutarti.\nSai, è il robot di mio nonno...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "Eccolo!\n\n\n\nSi chiama <color blue<Salbot>coloroff>. È un po'\nrudimentale, ma...\n\n\nÈ un robot fantastico! Quando lo\nchiami ti raggiunge ovunque e\ntrasporta per te qualsiasi cosa.\n\nPerò<0x10006:0xffcd>...<0x10006:0x00cd> come vedi non è proprio\nin forma.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x000d0e00>Secondo il nonno andrebbe lubrificato\ncon l'estratto di un fiore,\nil <color yellow<fiore antico>coloroff>.\n\n<0x10009:0x000f0e00>Ma io qui non ho mai\nsentito parlare di una cosa simile...\n[1-]Tieni[2]Neanche io")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Ehi! Questa è l'officina! Posso\npotenziare i tuoi strumenti!!!\nIl tuo scudo non ha un bell'aspetto?\nCi sono io qui a ripararlo!\nAllora, procedo?\n[1-]Potenzia[2-]Ripara[3]Niente")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<magatama ambrate>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<magatama ambrate>coloroff> sono importanti\ntesori che si possono trovare per terra,\nnei posti più disparati.")
/*<193>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00080806>Benissimo! Allora vuoi procedere\nal potenziamento? Ma ti avverto che\nle modifiche sono permanenti!\n[1-]Potenzia[2]No grazie")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Ottimo!\nAbbi solo un po' di pazienza!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080809>Ecco fatto! Tieni!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000e0e05>Ma stai scherzando?\nÈ in condizioni pessime!\n\n\nScegli qualcos'altro.")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<magatama scure>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<magatama scure >coloroff>si trovano forse\nnei mondi spirituali... Ma non sono\nsicuro di cosa questo significhi.")
/*<198>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080800>Oh... Grazie!\nTorna di nuovo!<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 2, unk: 0, line: 129 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nLa potenza della vostra spada è \naumentata. È ora possibile\n<color red<rilevare >coloroff><color red<tesori>coloroff>.\nImpostazioni del <color red<rilevatore>coloroff>\nper la ricerca di <color red<tesori>coloroff>\neffettuate. Potete servirvene\na vostro piacimento.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>Cosa? Già te ne vai?\nAvevo appena cominciato!\n\n\n<0x10009:0x00ffff00>Pazienza...\nTorna quando vuoi, giovanotto!<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>Uff!\n<0x10006:0xfccd>...<0x10006:0x00cd>\nEcco fatto!<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<gelatine spettrali>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<gelatine spettrali >coloroff>si possono ottenere\ndai mostri soffici...")
/*<207>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Se vuoi potenziare qualche\naltra cosa, basta che me lo dici!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Ma non hai nulla da potenziare!\nPazienza, torna un'altra volta!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x161a0200>Grazie!\nMi sento proprio in forma!\nPosso trasportare qualsiasi cosa!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>Cosa?!<pause 30>\nMa chi è questo tizio tutto verde? Bzzz!")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x0008110a>Hai sentito? Ha parlato!\nAllora funziona!\n\n\nQuesto ragazzo mi ha trovato quello\nche serviva per la riparazione!\nRingrazialo!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x160b0900>Mah... questo qui?\nBzzz...\n\n\n<0x10009:0x160c0900>Beh, allora mi sa che devo proprio\nringraziarlo. Grazie tizio verdino!")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00090952>Ehi! Modera i termini quando ti\nrivolgi a chi ti ha salvato la vita!\n\n\n<0x10009:0x00070700>Comunque... questo ragazzo ha\nbisogno di aiuto per trasportare\ndelle cose... perché non ci\npensi tu?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x160b0900>Mah... Sarà pure il mio salvatore,\nma oggi non sono in vena di\nringraziamenti!\n\n<0x10009:0x160c0900>E ho troppo da fare per prendere\nordini da un bambino! Bzzz!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 2, unk: 0, line: 125 */ "<0x10012:0x00000001>Mio signore, Faih a rapporto.\n\n\n\nÈ possibile utilizzare il <sound 4><color red<rilevatore\n>coloroff>per individuare l'<color red<elica del mulino>coloroff>.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "Confermo l'impossibilità di metterla\nnella borsa e riportarla a Oltrenuvola.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x161a0200>Eh?!\n<0x10009:0x160e0200>... Oh?!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x160e0200>Ma tu... Bzzz...\nTu sei... Faih?! La mia adorata Faih?\nHai bisogno di qualcosa?")
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x160c0200>Ho...<pause 20> ho capito!\n\n\n\n<0x10009:0x160e0200>Per te potrei muovere le montagne!\nPosso trasportare qualsiasi peso!\nBzzz!")
/*< 87>*/ 	printf(/* textboxtype: 2, unk: 0, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>... ...<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 128 */ "<0x10012:0x00000001>Mio signore.\n\n\n\nÈ stato trovato un espediente per\nriportare l'elica dalla Terra\na Oltrenuvola.\n\nÈ ora possibile iniziare la ricerca\ndell'<color blue<elica del mulino>coloroff>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x160c0200>Signore verde!\nAspetta! Ti aiuto!  \nHo rilevato le onde di Faih! Bzzz! Bzzz!\n\n<0x10009:0x160e0200>Se hai bisogno di qualcosa, dì a Faih di\nchiamarmi. Arriverò subito!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x00070700>Uhm... \nVuoi recuperare una cosa caduta al di\nsotto delle nuvole, ma come pensi di\ntrovarla? \nMi sa che ti conviene fare un salto\ndall'<color red<indovino>coloroff>...\n\n\nHa una faccia poco raccomandabile,\nma ha fiuto nel ritrovare gli\noggetti smarriti!")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\ni preziosi <color yellow<artigli di mostro>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \ngli <color yellow<artigli di mostro >coloroff>si possono ottenere\ndai mostri volanti... Qui la sera ne\nvolano parecchi.")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>Uhmmm... Per la verità, ultimamente\ndi notte si sta abbastanza tranquilli.")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000e0e0c>Ehi! Giovanotto! Ma i tesori?\nNon posso mica apportare delle\nmodifiche con... niente! \n\n<0x10009:0x00070700>Non hai un altro strumento\nda potenziare?")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>Ehi! Giovanotto! Le tue rupie non sono\nsufficienti... niente\npotenziamento!\n\n<0x10009:0x00070700>Se vuoi potenziare qualcos'altro\nfammelo sapere!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\ni preziosi <color yellow<corni di mostro>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \ni <color yellow<corni di mostro >coloroff>si possono ottenere\nin qualche modo dai mostri che\nsuonano il corno...")
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Ehi! Giovanotto! Ma non hai nessuno\nstrumento da potenziare...\nperché non vai alla bottega degli arnesi\na comprarne qualcuno?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\ni preziosi <color yellow<teschi ornamentali>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \ni <color yellow<teschi ornamentali >coloroff>si possono\nottenere da mostri dotati di lance o\narmi simili...")
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00080800>Benissimo!\nVuoi riparare questo scudo?\nTi costerà <color red<10 rupie>coloroff>!\n[1-]Va bene[2]No, grazie")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Ottimo!\nAbbi solo un po' di pazienza!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080809>Ecco fatto! Tieni!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Ehi! Giovanotto! Non hai rupie a\nsufficienza! Incredibile!\nPrima di tornare, datti al risparmio!")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "Ah... hai cambiato idea?\nQualche altro scudo da riparare?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\ni preziosi <color yellow<cristalli demoniaci>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \ni <color yellow<<color yellow<cristalli demoniaci<color yellow< >coloroff>si possono\nottenere sconfiggendo mostri delle\ntenebre...")
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00080800>Ehi!\nVuoi che ti ripari\nun altro scudo?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00080800>Ehi! \nMa non hai scudi da riparare!\nAlla prossima!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<piume azzurre>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<piume <color yellow<azzurre <color yellow<>coloroff>si possono ottenere\ncatturando con il retino rari uccellini \nblu, in territori dove c'è molto verde.")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\ni preziosi <color yellow<teschi dorati>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \ni <color yellow<<color yellow<teschi dorati<color yellow< >coloroff>sono teschi ornamentali\nche rilucono come oro e sono assai\ndifficili da trovare...")
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<ciglia della Dea>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<<color yellow<ciglia della Dea<color yellow< >coloroff>sono oggetti assai\npreziosi e difficilissimi da trovare...")
/*<238>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>Ehi, giovanotto!\nMa mancano le preziose <color yellow<larve d'ape>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<larve d'ape>coloroff> possono essere catturate\nnegli alveari delle api, in territori\ndove c'è molto verde.")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>Ehi, giovanotto! Ma mancano\nle preziose <color yellow<piume d'uccello>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \nle <color yellow<piume d'uccello>coloroff> si possono ottenere\ncatturando con il retino piccoli uccelli,\nin territori dove c'è molto verde.")
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>Ehi, giovanotto!\nMa mancano i preziosi <color yellow<rotolacampo>coloroff>!\n\n\nSecondo gli antichi libri del nonno, \ni <color yellow<rotolacampo>coloroff> sono grumi di erbe che\nrotolano in territori sabbiosi e possono\nessere catturati con il retino.")
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00070700>Bene!\nSe vuoi potenziare qualche altra cosa,\nscegli pure!")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

