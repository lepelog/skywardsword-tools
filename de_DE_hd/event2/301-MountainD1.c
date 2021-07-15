          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe einen neuen Typus\nvon Gegner in der Nähe entdeckt. Er\nscheint äußerst überlegene körperliche\nFähigkeiten zu besitzen.\nIch schlage vor, ihn durch Drücken\nvon (Z) <g<anzuvisieren>> und mich mithilfe\nvon (v) zu rufen, damit ich dir weitere\nInformationen über ihn geben kann.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Verflucht, alles voller Ungeheuer...\nUnd ich wurde von meinem Kumpel getrennt.\nWir hätten nicht herkommen sollen.")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("Ich kenne dich doch...\nHat dich die Suche nach deiner\nFreundin hierhergebracht?\n\nDa fällt mir ein...<pause0F> Ich habe gesehen, wie <r<jemand\nmit blonden Haaren und komischen Klamotten>><pling>\nweggebracht wurde.\n\nAber...\x0E\x01\x09\x04\x14\x1215 Es ist sinnlos, ihr zu Hilfe zu kommen,\nda ist alles voller Ungeheuer.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Halt dich da lieber raus, es ist viiieeel\nzu gefährlich...")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter, Zelda scheint sich an dieser\nQuelle spirituell gereinigt zu haben.\n\n\nIch schätze, dass sie nun in ein Gebiet\nnamens <b<Ranelle>> unterwegs ist.\n\n\nWenn wir die Steintafel zum Tempel\nbringen, wird eine neue Lichtsäule\nerscheinen und wir können ihr nach\n<b<Ranelle>> folgen.\nIch schlage vor, zum <b<Wolkenhort>>\nzurückzukehren und von dort aus nach\nRanelle zu reisen.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Verflucht, sie ist nicht da...\nIch hab sie bestimmt vorhin verloren...")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Oh! Du kommst genau richtig!\nIch bin's, <b<Ferri>>!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFGut, dass ich dich hier treffe.\nKönntest du mir einen Gefallen tun\nund nach meiner <y<Bombentasche>> suchen?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Ich war auf der anderen Seite dieser\nFelsen, als plötzlich diese Monster\nauftauchten...<pause0F> Da bin ich abgehauen\nund muss sie dabei \x0E\x01\x09\x04\x13\x100Dverloren haben.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFIn der Tasche kann man <r<Donnerblumen\nmitnehmen und jederzeit einsetzen>>.\nOhne diese Tasche bin ich komplett\naufgeschmissen...\nBestimmt haben die Monster sie...<pause0A>\n\x0E\x01\x09\x04\x11\xDFFBring mir bitte meine <y<Bombentasche >>wieder!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08Meine <y<Bombentasche>>!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFVielen, vielen Dank!\nDann gib sie mal her...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0EMoment, ich soll sie dir leihen, damit\ndu tiefer in den Vulkan gehen kannst?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFHm, immerhin hast du dich auf der Suche\nnach deiner Freundin bis hierhin gewagt...\n\n\n\x0E\x01\x09\x04\x15\xD11Da fällt mir ein...<pause0F>\nHast du meinen Kumpel gesehen?\n[1]Er ist nach\nHause gegangen.[2]Er macht sich\nSorgen um dich.[3]Weiß nicht.")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007Auf den ist wirklich kein Verlass...\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFDu dagegen hast dich für deine Freundin\nan diesen gefährlichen Ort gewagt...\n\n\n\x0E\x01\x09\x04\x14\x1209Also gut, hier hast du sie.\nViel Spaß damit!")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("Ich gebe dir meine <y<Bombentasche>>,\ndamit du deine Freundin findest.")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Er hat sich also Sorgen um mich gemacht...<pause0F>\nDas tut mir leid.\n\n\n\x0E\x01\x09\x04ÿ\x8FFDu machst dir bestimmt auch Sorgen\num deine Freundin, was?\n\n\n\x0E\x01\x09\x04\x14\x1209Also gut, hier hast du sie.\nViel Spaß damit!")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Hm...<pause0F>\nOb es ihm gut geht?\nHier sind so viele Monster...\n\n\x0E\x01\x09\x04\x00\x8FFDu hast sicher auch Angst um deine Freundin...\n\n\n\n\x0E\x01\x09\x04\x14\x1209Also gut, hier hast du sie.")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12Warte!\nIch hab was vergessen!\n\n\n\x0E\x01\x09\x04\x09\x8FFDie Tasche ist leer, also nimm die hier!")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Wenn du keine Bomben mehr hast,\nkannst du die Tasche auch mit\nDonnerblumen füllen.\n\n\x0E\x01\x09\x04\x11\x80BHebe dazu eine Donnerblume auf und\ndrücke dann (B), um sie <g<einzustecken>>.\x0E\x01\x11\x02\x1CD\n\n\n\x0E\x01\x09\x04\x09\x8FFIn die Tasche passen bis zu <r<10 Stück>>,\nwenn du also Donnerblumen findest,\nsolltest du deine Vorräte auffüllen.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Hast du schon mal gegen ein Monster\ngekämpft und bist dabei in Brand geraten?\n\n\n\x0E\x01\x09\x04\x09\x8FFDu solltest die Flammen schnellstens löschen,\naber vor allem solltest du niemals, wirklich\nniemals, <y<Bomben >>einsetzen, wenn du in\nFlammen stehst!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Nicht schlecht!\nNetter Trick, die <y<Donnerblume>> durch\nden Spalt zu rollen!\n\n\x0E\x01\x09\x04\x11\x800Jetzt kannst du dich auf die Suche nach\nmeiner <y<Bombentasche>> machen!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Diese Felsen müssen doch kaputt zu kriegen\nsein. Versuch's mal mit einer <y<Donnerblume>>.")
          			  case 1:
/*< 97>*/ 				printf("Oh...<pause0F> Tja, wenn du nicht graben kannst,\nkommst du nicht auf die andere Seite...\n\n\n\x0E\x01\x09\x04\x15\x120CAber Felsen wie diese kriegst du mit\n<y<Donnerblumen>> klein.\n\n\n\x0E\x01\x09\x04\x09\xFF00Sieh dich doch mal um, ob du hier in der Nähe\nnicht irgendwo <y<Donnerblumen>> findest.")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Tempel des\nErdlandes")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 51, 'param3': 6}
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFSo trifft man sich wieder...")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFOh<pause01>.<pause01>.<pause01>.<pause01>\n<pause08>Nein, wie unhöflich...<pause14>\nIch habe deinen Namen vergessen...\n\n\x0E\x01\x09\x04\xD0A\x5FFNa, ist auch unwichtig.\nHör mir nur kurz zu, ja?")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Da sagen mir meine unfähigen Handlanger,\ndass sie die heilige Maid gefangen haben...\nIch eile herbei, und was muss ich sehen?\n\n\x0E\x01\x09\x04\xD00\xCFFDiese lästige Marionette der Göttin kommt\nmir zuvor...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍDiese...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍSie hat...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDDieses Schoßhündchen der\nGöttin...\x0E\x01\n\x04\x0BÍ Sie hat sie einfach\nmitgenommen!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CDDabei brauche ich sie doch, um meinen\nKönig zu befreien!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>.<pause05>.<pause05>.<pause05>\n<pause0A>Ich entschuldige mich.\n\n\n\x0E\x01\x09\x04\xD08\x5FFAber jetzt verstehst du sicher, warum ich\netwas ungehalten bin.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFAch, was soll die Zurückhaltung.\n<pause14>Ich habe es nicht eilig...<pause14>\nEs ist genug Zeit...<pause14>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("So spüre die Flammen meines Zorns!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 65, 'next': 48, 'param3': 6}
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nIch spüre Zeldas Aura in der Nähe.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("Besonders von dieser Kette gehen starke\nSchwingungen aus. Die Wahrscheinlichkeit,\ndass Zelda mit ihr gefesselt wurde, liegt bei 95 %.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("Ich vermute, dass Zelda irgendwie entkommen konnte.\nIch rate zur Eile.")
          }

