          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nmehr <y<Eidechsenschwänze>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man\nechsenartige Monster besiegt.")
/*<178>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Eldin-Erz>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndieses Zeug in einem in Flammen gehüllten\nBerg abbauen kann.")
/*<187>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Äonenblumen>>, um dieses Item\nzu verbessern.\n\nDu weißt schon, das sind diese Blumen, die\nfrüher in der Wüste gewachsen sind. Du hast\nmir eine gebracht, um meinen lieben Trapo\nzu reparieren!")
          		flw_188:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Äonenblumen>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger in einer Zeit wuchsen, als die Wüste\nnoch keine Wüste war. Ob sie wohl heute\nnoch existieren?")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hey! Wie geht's meinem Trapo?\nOh, kommst du etwa, weil du Arbeit\nfür mich hast?\n[1]Items\nverbessern[2]Schild\nreparieren[3-]Kein Bedarf")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x09Alles klar! Das sind die Items, die ich für dich\nverbessern kann.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Du hast kein Item, das ich\nverbessern könnte... Was für ein Jammer!\n\n\nWie wär's, wenn du dir drüben beim Item-Laden\netwas kaufst?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x09\x04\x00\x09Sag mir, welchen Schild ich für dich\nreparieren soll!")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CMoment mal! Du hast doch gar keinen Schild,\nder repariert werden müsste!\n\n\nTreibst du hier etwa deine Späße mit\nmir, Freundchen?")
          			}
          		  case 2:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CWenn du nichts für mich zu tun hast, dann\nquatsch mich gefälligst nicht an!")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Pass gut auf meinen Trapo auf!\n\n\n\nIch glaube, dass er die Fähigkeit hat,\nGedankenwellen überall aufzuspüren.\n\n\n\x0E\x01\x09\x04\x08\x700Du kannst ihn also ganz einfach rufen,\negal wo du dich befindest!\n\n\nEr hat ein loses Mundwerk, aber er macht\nseine Arbeit ohne jeden Makel! <pause1E>Oh, tut\nmir leid, dass ich so viel rede!")
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x07\x700Na, was kann ich heute für dich tun?\nEinen Schild reparieren? Ein Item\nverbessern? Sag mir einfach Bescheid!\n[1]Items\nverbessern[2]Schild\nreparieren[3-]Nichts")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x03Hey, kleiner Freund! Du guckst ja\nbelämmert drein!\n\n\nWie? Du hast eine Bitte an mich?\n[1]Ganz genau.[2-]Eigentlich\nnicht.")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ich brauche eine <y<Äonenblume>>, um meinen\n<b<Trapo>> zu reparieren. Aber ich hab keine\nAhnung, wo man so eine finden kann.\n[1]Hier, bitte![2-]Ich auch\nnicht.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf("\x0E\x01\x09\x04\x07\x717Was sagst du da? Du hast so eine?!?\nDas ist ja fabulös!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf("\x0E\x01\x09\x04\x0E\xE0CWas \x0E\x01\x06\x02\xFDCDsoll\x0E\x01\x06\x02Í denn das, Freundchen? Erst sagst du,\ndass du so eine Blume hast, und dann stimmt\ndas gar nicht! Ich bin wirklich entsetzt!")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf("\x0E\x01\x09\x04\x00\x18D-das ist... eine <y<Äonenblume>>?!? Tatsächlich...\nDie Essenz der Wurzel gibt ein absolut\nhervorragendes Öl ab!\n\nUnglaublich! Damit kann ich meinen <b<Trapo\n>>endlich reparieren!\n\n\n\x0E\x01\x09\x04\x07\x700Warte einen Moment!\nIch mache mich gleich an die Arbeit!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf("\x0E\x01\x09\x04\x0F\x916Hm... Du hast also auch noch nie eine\n<y<Äonenblume>> gesehen...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x10\x1008Was?<pause28> Der Roboter meines Opas?\n\n\n\n\x0E\x01\x09\x04\x00\xE00Kommst du denn etwa auch, um mich\nauszulachen, weil es mir nicht gelingt,\nihn zu reparieren?\n\nNein?<pause28> Was sagst du? Du willst mit\nmeinem Roboter etwas aus der Welt\nunter den Wolken holen?\n\n\x0E\x01\x09\x04\x07\x700Heißt das, du glaubst mir die Sache mit\nmeinem Opa und dem Roboter?")
/*< 53>*/ 						printf("\x0E\x01\x09\x04\x0D\x900Das freut mich ja, aber ich glaube nicht,\ndass ich dir eine große Hilfe sein werde.\nDer Roboter ist leider...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf("Da, sieh ihn dir an!\n\n\n\nEr heißt <b<Trapo>>. Na ja, er sieht aus wie ein\nHaufen Schrott, oder?\n\n\nEs heißt, man konnte ihn einst rufen und\nallerhand Sachen von einem Ort zum\nanderen transportieren lassen.\n\nAber jetzt\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í Ach, du siehst es ja selbst.\nEr funktioniert einfach nicht mehr.")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf("\x0E\x01\x09\x04\x0D\xE00Opa sagte, man könne ihn reparieren,\nwenn man den Extrakt einer Blume als\nSchmieröl verwendet. Es handelt sich\ndabei um eine <y<Äonenblume>>.\n\x0E\x01\x09\x04\x0F\xE00Aber von so was hab ich noch nie gehört.\nGeschweige denn, dass ich je so eine Blume\ngesehen hätte...\n[1]Hier, bitte![2-]Ich auch\nnicht.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hey! Willkommen in der Werkstatt!\nIch kann hier deine Items verbessern\nund deinen Schild reparieren! Also,\nwo soll ich die Schrauben ansetzen?\n[1]Items\nverbessern[2]Schild\nreparieren[3-]Nichts")
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
/*<192>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Bernsteinhalbmonde>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger an unterschiedlichen Orten einfach\nso herumliegen...")
/*<193>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x08\x806Jawoll! Aber vergiss nicht, eine Verbesserung\nkann nicht mehr rückgängig gemacht werden!\n[1]Kein Problem![2-]Dann nicht.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x07\x70EAlles klar! Dann lege ich mal los!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf("\x0E\x01\x09\x04\x08\x809So, ich bin fertig!\nHier, das gehört dir!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Willst du mich auf deinen schmächtigen Arm\nnehmen, Freundchen?\n\n\nSuch doch was anderes aus!")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Finsterhalbmonde>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger in einer Welt finden kann, die in\nunserer Seele existiert. Was soll das denn\nbitte heißen?")
/*<198>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x08\x800Oh, vielen Dank!\nBis zum nächsten Mal!\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDie neue Kraft deines Schwertes ermöglicht dir nun\ndie Suche nach <r<Schätzen>> mithilfe der <r<Aurasuche>>.\n\n\nWähle einfach <r<Schätze>> als Ziel für die <r<Aurasuche>> aus,\nwenn du diese Funktion nutzen möchtest.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x09\x90DAch, warum denn das?\nSei kein Spielverderber!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Aber na ja, was soll's! Komm wieder,\nwenn du's dir anders überlegt hast!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf("\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FPuh\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Und fertig!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Glibber>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndieses Zeug finden kann, wenn man schleimige\nMonster besiegt.")
/*<207>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf("Sag mir Bescheid, wenn ich noch ein anderes\nItem für dich verbessern soll!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf("Beim Wolkenvogel! Du hast ja gar kein Item\nmehr, das ich verbessern könnte. Tja, das\nist aber schade!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Danke! Ich bin wieder voller Energie!\nIch bin jederzeit bereit, wenn es etwas\nzu transportieren gibt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf("<pause1E>\x0E\x01\x09\x04\x160C\x900Hm?<pause1E> Wer ist denn der grüne Wicht?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf("\x0E\x01\x09\x04\x08\x110AEr spricht! Trapo spricht! Ha, ich bin der beste\nMechaniker aller Zeiten!\n\n\nGuck mal, Trapo! Der grüne Kerl hier hat mir\ngeholfen, dich zu reparieren, also sei ihm\ndankbar, verstanden?")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Pah! Dieser Wicht? Hmmm...\n\n\n\n\x0E\x01\x09\x04\x160C\x900Also gut... \x201EVielen Dank, dass du dabei\ngeholfen hast, mich zu reparieren.\x201C\nReicht das?")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf("\x0E\x01\x09\x04\x09\x952Also wirklich! Wie sprichst du denn mit\ndeinem Lebensretter?\n\n\n\x0E\x01\x09\x04\x07\x700Sei ein guter Roboter und hilf ihm, ja?\nUnser Freundchen hat nämlich Arbeit\nfür dich!")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Pah! Das ist mir doch egal! Ich rede, wie ich\nwill, und basta!\n\n\n\x0E\x01\x09\x04\x160C\x900Und ich lasse mich doch nicht von so einem\nWicht herumkommandieren!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter...\n\n\n\nEs ist möglich, den herabgestürzten <r<Windrad-Propeller\n>>für das große Windrad mit der <pling><r<Aurasuche>> zu finden.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf("Er ist jedoch zu schwer, um ihn in der Tasche hierher\ntragen zu können.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Wie? Was?\n\x0E\x01\x09\x04\x160E\x200Oh! Oooh!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x160E\x200P-P-Phai? Die... Phai? Oh, verehrte Phai,\nwie kann ich Euch dienen?")
/*<116>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Sehr<pause14> wohl, verehrte Phai!\n\n\n\n\x0E\x01\x09\x04\x160E\x200So schwer es auch sein mag, für Euch trage ich\nes bis ans Ende der Welt!")
/*< 87>*/ 	printf("\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14...\x0E\x01\x06\x02Í")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter...\n\n\n\nMithilfe des Roboters ist es möglich, den <b<Windrad-\nPropeller >>aus dem Erdland hierher zu transportieren.\n\n\nBegib dich nun auf die Suche nach dem Propeller.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Also, ich helfe dir, grüner Wicht! Frag die\nverehrte Phai, wenn du mich brauchst. Ich\nkann ihre Gedankenwellen aufspüren.\n\n\x0E\x01\x09\x04\x160E\x200Bitte die verehrte Phai, mich zu rufen,\nwenn ich etwas transportieren soll.")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x07\x700Wie findest du eigentlich die Sachen,\ndie unter die Wolken gestürzt sind?\n\n\nVielleicht hilft dir ja unser schrulliger\n<r<Wahrsager>> da drüben...\n\n\nEr sieht aus wie ein Hohlkopf, aber\nseine Vorhersagen sind meistens gar\nnicht mal so übel.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Monsterklauen>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man fliegende\nMonster besiegt. Hier schwirren ja nachts auch\nwelche rum...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf("\x0E\x01\x09\x04\x10\xE11Obwohl... Ich habe schon länger keine mehr\nhier gesehen. Warum es wohl so ruhig\ngeworden ist?")
          		flw_208:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Du musst noch ein paar\nSchätze mehr sammeln, damit ich dieses Item\nverbessern kann.\n\n\x0E\x01\x09\x04\x07\x700Aber vielleicht findest du ja noch was anderes,\nan das ich meinen treuen Schraubenzieher\nanlegen kann?")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Ich mach das hier nicht\numsonst! Du hast nicht genügend Rubine für\ndiese Verbesserung.\n\n\x0E\x01\x09\x04\x07\x700Aber vielleicht findest du ja etwas, das du dir\nleisten kannst? Sieh dich ruhig noch mal um!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Monsterhörner>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man Monster\nbesiegt, die mit einem Signalhorn ihre\nHandlanger rufen...")
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Du hast kein Item, das ich\nverbessern könnte... Was für ein Jammer!\n\n\nWie wär's, wenn du dir drüben beim Item-Laden\netwas kaufst?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Schmuckschädel>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man Monster\nbesiegt, die mit Knüppeln oder anderen\nWaffen kämpfen.")
/*<218>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf("\x0E\x01\x09\x04\x08\x800Diesen Schild hier soll ich reparieren?\nPah, nichts leichter als das. Mal sehen,\nfür <r<10 Rubine >>sieht er gleich wieder\naus wie neu!\n[1]Danke![2-]Doch nicht.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x07\x70EAlles klar! Dann lege ich mal los!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x08\x809So, ich bin fertig!\nHier, das gehört dir!")
          		  case 1:
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CHey, Freundchen! Versuchst du etwa, mich\nübers Ohr zu hauen? Pah! Komm wieder,\nwenn du genügend Rubine hast!")
          		}
          	  case 1:
/*< 75>*/ 		printf("Was? Ist dir das etwa zu teuer?\nOder willst du doch lieber einen\nanderen Schild reparieren lassen?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Schattenkristalle>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man finstere\nMonster besiegt...")
/*<227>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hey! Soll ich noch einen anderen Schild für\ndich reparieren?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hey, Freundchen! Du hast keinen Schild mehr,\nden ich reparieren könnte. Komm ein\nandermal wieder!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<blaue Vogelfedern>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man sie\nfinden kann, wenn man an einem grünen Ort\nseltene blaue Vögelchen mit einem Netz fängt...")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<goldene Schmuckschädel>>, um dieses\nItem zu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger herrlich glänzen und sehr selten sind.")
/*<233>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Geschenke der Göttin>>, um dieses\nItem zu verbessern.\n\nIn den Büchern meines Opas steht, dass diese\nDinger furchtbar selten und unheimlich\nwertvoll sind.")
/*<238>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Bienenlarven>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man sich an\nBienenstöcken in irgendeinem Wald zu\nschaffen macht...")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Vogelfedern>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndiese Dinger finden kann, wenn man Vögel an\neinem Ort voller Grün mit einem Netz fängt...")
/*<168>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, das tut mir wirklich leid, aber ich brauche\nnoch mehr <y<Wüstengras>>, um dieses Item\nzu verbessern.\n\nIn den Büchern meines Opas steht, dass man\ndieses Zeug mit einem Netz einfangen kann,\nwenn es durch die Wüste rollt...")
/*<173>*/ 	printf("\x0E\x01\x09\x04\x07\x700Gibt es irgendein anderes Item, das ich\nverbessern soll?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

