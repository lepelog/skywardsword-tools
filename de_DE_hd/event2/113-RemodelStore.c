          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nmehr <color yellow<Eidechsenschwänze>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man\nechsenartige Monster besiegt.")
/*<178>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Eldin-Erz>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndieses Zeug in einem in Flammen gehüllten\nBerg abbauen kann.")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Äonenblumen>coloroff>, um dieses Item\nzu verbessern.\n\nDu weißt schon, das sind diese Blumen, die\nfrüher in der Wüste gewachsen sind. Du hast\nmir eine gebracht, um meinen lieben Trapo\nzu reparieren!")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Äonenblumen>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger in einer Zeit wuchsen, als die Wüste\nnoch keine Wüste war. Ob sie wohl heute\nnoch existieren?")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 18, unk: 0, line: 114 */ "<0x10009:0x00000003>Hey! Wie geht's meinem Trapo?\nOh, kommst du etwa, weil du Arbeit\nfür mich hast?\n[1-]Items\nverbessern[2-]Schild\nreparieren[3]Kein Bedarf")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000009>Alles klar! Das sind die Items, die ich für dich\nverbessern kann.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hey, Freundchen! Du hast kein Item, das ich\nverbessern könnte... Was für ein Jammer!\n\n\nWie wär's, wenn du dir drüben beim Item-Laden\netwas kaufst?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>Sag mir, welchen Schild ich für dich\nreparieren soll!")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x000e0e0c>Moment mal! Du hast doch gar keinen Schild,\nder repariert werden müsste!\n\n\nTreibst du hier etwa deine Späße mit\nmir, Freundchen?")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>Wenn du nichts für mich zu tun hast, dann\nquatsch mich gefälligst nicht an!")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 19, unk: 0, line: 111 */ "<0x10009:0x00001104>Pass gut auf meinen Trapo auf!\n\n\n\nIch glaube, dass er die Fähigkeit hat,\nGedankenwellen überall aufzuspüren.\n\n\n<0x10009:0x00080700>Du kannst ihn also ganz einfach rufen,\negal wo du dich befindest!\n\n\nEr hat ein loses Mundwerk, aber er macht\nseine Arbeit ohne jeden Makel! <pause 30>Oh, tut\nmir leid, dass ich so viel rede!")
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 17, line: 112 */ "<0x10009:0x00070700>Na, was kann ich heute für dich tun?\nEinen Schild reparieren? Ein Item\nverbessern? Sag mir einfach Bescheid!\n[1-]Items\nverbessern[2-]Schild\nreparieren[3]Nichts")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 18, line: 97 */ "<0x10009:0x00000003>Hey, kleiner Freund! Du guckst ja\nbelämmert drein!\n\n\nWie? Du hast eine Bitte an mich?\n[1-]Ganz genau.[2]Eigentlich\nnicht.")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000001>Ich brauche eine <color yellow<Äonenblume>coloroff>, um meinen\n<color blue<Trapo>coloroff> zu reparieren. Aber ich hab keine\nAhnung, wo man so eine finden kann.\n[1-]Hier, bitte![2]Ich auch\nnicht.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 19, unk: 0, line: 102 */ "<0x10009:0x00070717>Was sagst du da? Du hast so eine?!?\nDas ist ja fabulös!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>Was <0x10006:0xfdcd>soll<0x10006:0x00cd> denn das, Freundchen? Erst sagst du,\ndass du so eine Blume hast, und dann stimmt\ndas gar nicht! Ich bin wirklich entsetzt!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 18, unk: 0, line: 108 */ "<0x10009:0x00000018>D-das ist... eine <color yellow<Äonenblume>coloroff>?!? Tatsächlich...\nDie Essenz der Wurzel gibt ein absolut\nhervorragendes Öl ab!\n\nUnglaublich! Damit kann ich meinen <color blue<Trapo\n>coloroff>endlich reparieren!\n\n\n<0x10009:0x00070700>Warte einen Moment!\nIch mache mich gleich an die Arbeit!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 17, line: 103 */ "<0x10009:0x000f0916>Hm... Du hast also auch noch nie eine\n<color yellow<Äonenblume>coloroff> gesehen...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00101008>Was?<pause 40> Der Roboter meines Opas?\n\n\n\n<0x10009:0x00000e00>Kommst du denn etwa auch, um mich\nauszulachen, weil es mir nicht gelingt,\nihn zu reparieren?\n\nNein?<pause 40> Was sagst du? Du willst mit\nmeinem Roboter etwas aus der Welt\nunter den Wolken holen?\n\n<0x10009:0x00070700>Heißt das, du glaubst mir die Sache mit\nmeinem Opa und dem Roboter?")
/*< 53>*/ 						printf(/* textboxtype: 18, unk: 0, line: 99 */ "<0x10009:0x000d0900>Das freut mich ja, aber ich glaube nicht,\ndass ich dir eine große Hilfe sein werde.\nDer Roboter ist leider...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 19, line: 100 */ "Da, sieh ihn dir an!\n\n\n\nEr heißt <color blue<Trapo>coloroff>. Na ja, er sieht aus wie ein\nHaufen Schrott, oder?\n\n\nEs heißt, man konnte ihn einst rufen und\nallerhand Sachen von einem Ort zum\nanderen transportieren lassen.\n\nAber jetzt<0x10006:0xffcd>...<0x10006:0x00cd> Ach, du siehst es ja selbst.\nEr funktioniert einfach nicht mehr.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000d0e00>Opa sagte, man könne ihn reparieren,\nwenn man den Extrakt einer Blume als\nSchmieröl verwendet. Es handelt sich\ndabei um eine <color yellow<Äonenblume>coloroff>.\n<0x10009:0x000f0e00>Aber von so was hab ich noch nie gehört.\nGeschweige denn, dass ich je so eine Blume\ngesehen hätte...\n[1-]Hier, bitte![2]Ich auch\nnicht.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Hey! Willkommen in der Werkstatt!\nIch kann hier deine Items verbessern\nund deinen Schild reparieren! Also,\nwo soll ich die Schrauben ansetzen?\n[1-]Items\nverbessern[2-]Schild\nreparieren[3]Nichts")
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
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Bernsteinhalbmonde>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger an unterschiedlichen Orten einfach\nso herumliegen...")
/*<193>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00080806>Jawoll! Aber vergiss nicht, eine Verbesserung\nkann nicht mehr rückgängig gemacht werden!\n[1-]Kein Problem![2]Dann nicht.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Alles klar! Dann lege ich mal los!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>So, ich bin fertig!\nHier, das gehört dir!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000e0e05>Willst du mich auf deinen schmächtigen Arm\nnehmen, Freundchen?\n\n\nSuch doch was anderes aus!")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Finsterhalbmonde>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger in einer Welt finden kann, die in\nunserer Seele existiert. Was soll das denn\nbitte heißen?")
/*<198>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080800>Oh, vielen Dank!\nBis zum nächsten Mal!<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 19, unk: 0, line: 129 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nDie neue Kraft deines Schwertes ermöglicht dir nun\ndie Suche nach <color red<Schätzen>coloroff> mithilfe der <color red<Aurasuche>coloroff>.\n\n\nWähle einfach <color red<Schätze>coloroff> als Ziel für die <color red<Aurasuche>coloroff> aus,\nwenn du diese Funktion nutzen möchtest.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>Ach, warum denn das?\nSei kein Spielverderber!\n\n\n<0x10009:0x00ffff00>Aber na ja, was soll's! Komm wieder,\nwenn du's dir anders überlegt hast!<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>Puh<0x10006:0xfccd>...<0x10006:0x00cd> Und fertig!<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Glibber>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndieses Zeug finden kann, wenn man schleimige\nMonster besiegt.")
/*<207>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Sag mir Bescheid, wenn ich noch ein anderes\nItem für dich verbessern soll!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Beim Wolkenvogel! Du hast ja gar kein Item\nmehr, das ich verbessern könnte. Tja, das\nist aber schade!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x161a0200>Danke! Ich bin wieder voller Energie!\nIch bin jederzeit bereit, wenn es etwas\nzu transportieren gibt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 18, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>Hm?<pause 30> Wer ist denn der grüne Wicht?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 19, line: 109 */ "<0x10009:0x0008110a>Er spricht! Trapo spricht! Ha, ich bin der beste\nMechaniker aller Zeiten!\n\n\nGuck mal, Trapo! Der grüne Kerl hier hat mir\ngeholfen, dich zu reparieren, also sei ihm\ndankbar, verstanden?")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 19, line: 118 */ "<0x10009:0x160b0900>Pah! Dieser Wicht? Hmmm...\n\n\n\n<0x10009:0x160c0900>Also gut... „Vielen Dank, dass du dabei\ngeholfen hast, mich zu reparieren.“\nReicht das?")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00090952>Also wirklich! Wie sprichst du denn mit\ndeinem Lebensretter?\n\n\n<0x10009:0x00070700>Sei ein guter Roboter und hilf ihm, ja?\nUnser Freundchen hat nämlich Arbeit\nfür dich!")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x160b0900>Pah! Das ist mir doch egal! Ich rede, wie ich\nwill, und basta!\n\n\n<0x10009:0x160c0900>Und ich lasse mich doch nicht von so einem\nWicht herumkommandieren!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10012:0x00000001>Gebieter...\n\n\n\nEs ist möglich, den herabgestürzten <color red<Windrad-Propeller\n>coloroff>für das große Windrad mit der <sound 4><color red<Aurasuche>coloroff> zu finden.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 18, unk: 0, line: 126 */ "Er ist jedoch zu schwer, um ihn in der Tasche hierher\ntragen zu können.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 19, unk: 0, line: 120 */ "<0x10009:0x161a0200>Wie? Was?\n<0x10009:0x160e0200>Oh! Oooh!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 0, unk: 17, line: 121 */ "<0x10009:0x160e0200>P-P-Phai? Die... Phai? Oh, verehrte Phai,\nwie kann ich Euch dienen?")
/*<116>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x160c0200>Sehr<pause 20> wohl, verehrte Phai!\n\n\n\n<0x10009:0x160e0200>So schwer es auch sein mag, für Euch trage ich\nes bis ans Ende der Welt!")
/*< 87>*/ 	printf(/* textboxtype: 0, unk: 19, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>...<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10012:0x00000001>Gebieter...\n\n\n\nMithilfe des Roboters ist es möglich, den <color blue<Windrad-\nPropeller >coloroff>aus dem Erdland hierher zu transportieren.\n\n\nBegib dich nun auf die Suche nach dem Propeller.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 18, unk: 0, line: 123 */ "<0x10009:0x160c0200>Also, ich helfe dir, grüner Wicht! Frag die\nverehrte Phai, wenn du mich brauchst. Ich\nkann ihre Gedankenwellen aufspüren.\n\n<0x10009:0x160e0200>Bitte die verehrte Phai, mich zu rufen,\nwenn ich etwas transportieren soll.")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 18, line: 115 */ "<0x10009:0x00070700>Wie findest du eigentlich die Sachen,\ndie unter die Wolken gestürzt sind?\n\n\nVielleicht hilft dir ja unser schrulliger\n<color red<Wahrsager>coloroff> da drüben...\n\n\nEr sieht aus wie ein Hohlkopf, aber\nseine Vorhersagen sind meistens gar\nnicht mal so übel.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Monsterklauen>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man fliegende\nMonster besiegt. Hier schwirren ja nachts auch\nwelche rum...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>Obwohl... Ich habe schon länger keine mehr\nhier gesehen. Warum es wohl so ruhig\ngeworden ist?")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e0c>Hey, Freundchen! Du musst noch ein paar\nSchätze mehr sammeln, damit ich dieses Item\nverbessern kann.\n\n<0x10009:0x00070700>Aber vielleicht findest du ja noch was anderes,\nan das ich meinen treuen Schraubenzieher\nanlegen kann?")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>Hey, Freundchen! Ich mach das hier nicht\numsonst! Du hast nicht genügend Rubine für\ndiese Verbesserung.\n\n<0x10009:0x00070700>Aber vielleicht findest du ja etwas, das du dir\nleisten kannst? Sieh dich ruhig noch mal um!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Monsterhörner>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man Monster\nbesiegt, die mit einem Signalhorn ihre\nHandlanger rufen...")
/*<213>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hey, Freundchen! Du hast kein Item, das ich\nverbessern könnte... Was für ein Jammer!\n\n\nWie wär's, wenn du dir drüben beim Item-Laden\netwas kaufst?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Schmuckschädel>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man Monster\nbesiegt, die mit Knüppeln oder anderen\nWaffen kämpfen.")
/*<218>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00080800>Diesen Schild hier soll ich reparieren?\nPah, nichts leichter als das. Mal sehen,\nfür <color red<10 Rubine >coloroff>sieht er gleich wieder\naus wie neu!\n[1-]Danke![2]Doch nicht.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Alles klar! Dann lege ich mal los!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>So, ich bin fertig!\nHier, das gehört dir!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Hey, Freundchen! Versuchst du etwa, mich\nübers Ohr zu hauen? Pah! Komm wieder,\nwenn du genügend Rubine hast!")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Was? Ist dir das etwa zu teuer?\nOder willst du doch lieber einen\nanderen Schild reparieren lassen?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Schattenkristalle>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man finstere\nMonster besiegt...")
/*<227>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00080800>Hey! Soll ich noch einen anderen Schild für\ndich reparieren?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00080800>Hey, Freundchen! Du hast keinen Schild mehr,\nden ich reparieren könnte. Komm ein\nandermal wieder!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<blaue Vogelfedern>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man sie\nfinden kann, wenn man an einem grünen Ort\nseltene blaue Vögelchen mit einem Netz fängt...")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<goldene Schmuckschädel>coloroff>, um dieses\nItem zu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger herrlich glänzen und sehr selten sind.")
/*<233>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Geschenke der Göttin>coloroff>, um dieses\nItem zu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger furchtbar selten und unheimlich\nwertvoll sind.")
/*<238>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Bienenlarven>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man sich an\nBienenstöcken in irgendeinem Wald zu\nschaffen macht...")
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Vogelfedern>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man Vögel an\neinem Ort voller Grün mit einem Netz fängt...")
/*<168>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>Hey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <color yellow<Wüstengras>coloroff>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndieses Zeug mit einem Netz einfangen kann,\nwenn es durch die Wüste rollt...")
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

