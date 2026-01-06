          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10012:0x0000000b>Gebieter, ich habe einen neuen Typus\nvon Gegner in der Nähe entdeckt. Er\nscheint äußerst überlegene körperliche\nFähigkeiten zu besitzen.\nIch schlage vor, ihn durch Drücken\nvon (Z) <color green<anzuvisieren>coloroff> und mich mithilfe\nvon (v) zu rufen, damit ich dir weitere\nInformationen über ihn geben kann.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Verflucht, alles voller Ungeheuer...\nUnd ich wurde von meinem Kumpel getrennt.\nWir hätten nicht herkommen sollen.")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ich kenne dich doch...\nHat dich die Suche nach deiner\nFreundin hierhergebracht?\n\nDa fällt mir ein...<pause 15> Ich habe gesehen, wie <color red<jemand\nmit blonden Haaren und komischen Klamotten>coloroff><sound 4>\nweggebracht wurde.\n\nAber...<0x10009:0x00141215> Es ist sinnlos, ihr zu Hilfe zu kommen,\nda ist alles voller Ungeheuer.\n\n\n<0x10009:0x00ffff00>Halt dich da lieber raus, es ist viiieeel\nzu gefährlich...")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Gebieter, Zelda scheint sich an dieser\nQuelle spirituell gereinigt zu haben.\n\n\nIch schätze, dass sie nun in ein Gebiet\nnamens <color blue<Ranelle>coloroff> unterwegs ist.\n\n\nWenn wir die Steintafel zum Tempel\nbringen, wird eine neue Lichtsäule\nerscheinen und wir können ihr nach\n<color blue<Ranelle>coloroff> folgen.\nIch schlage vor, zum <color blue<Wolkenhort>coloroff>\nzurückzukehren und von dort aus nach\nRanelle zu reisen.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Verflucht, sie ist nicht da...\nIch hab sie bestimmt vorhin verloren...")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Oh! Du kommst genau richtig!\nIch bin's, <color blue<Ferri>coloroff>!\n\n\n<0x10009:0x00ffffff>Gut, dass ich dich hier treffe.\nKönntest du mir einen Gefallen tun\nund nach meiner <color yellow<Bombentasche>coloroff> suchen?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Ich war auf der anderen Seite dieser\nFelsen, als plötzlich diese Monster\nauftauchten...<pause 15> Da bin ich abgehauen\nund muss sie dabei <0x10009:0x0013100d>verloren haben.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000908ff>In der Tasche kann man <color red<Donnerblumen\nmitnehmen und jederzeit einsetzen>coloroff>.\nOhne diese Tasche bin ich komplett\naufgeschmissen...\nBestimmt haben die Monster sie...<pause 10>\n<0x10009:0x00110dff>Bring mir bitte meine <color yellow<Bombentasche >coloroff>wieder!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00110d08>Meine <color yellow<Bombentasche>coloroff>!\n\n\n\n<0x10009:0x00ff08ff>Vielen, vielen Dank!\nDann gib sie mal her...<pause 20>\n\n\n<0x10009:0x00110d0e>Moment, ich soll sie dir leihen, damit\ndu tiefer in den Vulkan gehen kannst?\n\n\n<0x10009:0x00ffffff>Hm, immerhin hast du dich auf der Suche\nnach deiner Freundin bis hierhin gewagt...\n\n\n<0x10009:0x00150d11>Da fällt mir ein...<pause 15>\nHast du meinen Kumpel gesehen?\n[1-]Er ist nach\nHause gegangen.[2-]Er macht sich\nSorgen um dich.[3-]Weiß nicht.")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00131007>Auf den ist wirklich kein Verlass...\n\n\n\n<0x10009:0x00ff08ff>Du dagegen hast dich für deine Freundin\nan diesen gefährlichen Ort gewagt...\n\n\n<0x10009:0x00141209>Also gut, hier hast du sie.\nViel Spaß damit!")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "Ich gebe dir meine <color yellow<Bombentasche>coloroff>,\ndamit du deine Freundin findest.")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00001004>Er hat sich also Sorgen um mich gemacht...<pause 15>\nDas tut mir leid.\n\n\n<0x10009:0x00ff08ff>Du machst dir bestimmt auch Sorgen\num deine Freundin, was?\n\n\n<0x10009:0x00141209>Also gut, hier hast du sie.\nViel Spaß damit!")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>Hm...<pause 15>\nOb es ihm gut geht?\nHier sind so viele Monster...\n\n<0x10009:0x000008ff>Du hast sicher auch Angst um deine Freundin...\n\n\n\n<0x10009:0x00141209>Also gut, hier hast du sie.")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>Warte!\nIch hab was vergessen!\n\n\n<0x10009:0x000908ff>Die Tasche ist leer, also nimm die hier!")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Wenn du keine Bomben mehr hast,\nkannst du die Tasche auch mit\nDonnerblumen füllen.\n\n<0x10009:0x0011080b>Hebe dazu eine Donnerblume auf und\ndrücke dann (B), um sie <color green<einzustecken>coloroff>.<0x10011:0x01cd>\n\n\n<0x10009:0x000908ff>In die Tasche passen bis zu <color red<10 Stück>coloroff>,\nwenn du also Donnerblumen findest,\nsolltest du deine Vorräte auffüllen.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00110d00>Hast du schon mal gegen ein Monster\ngekämpft und bist dabei in Brand geraten?\n\n\n<0x10009:0x000908ff>Du solltest die Flammen schnellstens löschen,\naber vor allem solltest du niemals, wirklich\nniemals, <color yellow<Bomben >coloroff>einsetzen, wenn du in\nFlammen stehst!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00150809>Nicht schlecht!\nNetter Trick, die <color yellow<Donnerblume>coloroff> durch\nden Spalt zu rollen!\n\n<0x10009:0x00110800>Jetzt kannst du dich auf die Suche nach\nmeiner <color yellow<Bombentasche>coloroff> machen!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Diese Felsen müssen doch kaputt zu kriegen\nsein. Versuch's mal mit einer <color yellow<Donnerblume>coloroff>.")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "Oh...<pause 15> Tja, wenn du nicht graben kannst,\nkommst du nicht auf die andere Seite...\n\n\n<0x10009:0x0015120c>Aber Felsen wie diese kriegst du mit\n<color yellow<Donnerblumen>coloroff> klein.\n\n\n<0x10009:0x0009ff00>Sieh dich doch mal um, ob du hier in der Nähe\nnicht irgendwo <color yellow<Donnerblumen>coloroff> findest.")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 2, line: 31 */ "Tempel des\nErdlandes")
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
/*< 70>*/ 	wait_frames(10)
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0d0805ff>So trifft man sich wieder...")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Oh<pause 1>.<pause 1>.<pause 1>.<pause 1>\n<pause 8>Nein, wie unhöflich...<pause 20>\nIch habe deinen Namen vergessen...\n\n<0x10009:0x0d0a05ff>Na, ist auch unwichtig.\nHör mir nur kurz zu, ja?")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>Da sagen mir meine unfähigen Handlanger,\ndass sie die heilige Maid gefangen haben...\nIch eile herbei, und was muss ich sehen?\n\n<0x10009:0x0d000cff>Diese lästige Marionette der Göttin kommt\nmir zuvor...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>Diese...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>Sie hat...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>Dieses Schoßhündchen der\nGöttin...<0x1000A:0x000b00cd> Sie hat sie einfach\nmitgenommen!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10008:0x01cd>Dabei brauche ich sie doch, um meinen\nKönig zu befreien!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<pause 5>.<pause 5>.<pause 5>.<pause 5>\n<pause 10>Ich entschuldige mich.\n\n\n<0x10009:0x0d0805ff>Aber jetzt verstehst du sicher, warum ich\netwas ungehalten bin.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>Ach, was soll die Zurückhaltung.\n<pause 20>Ich habe es nicht eilig...<pause 20>\nEs ist genug Zeit...<pause 20>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 2, unk: 0, line: 30 */ "So spüre die Flammen meines Zorns!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	wait_frames(65)
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
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nIch spüre Zeldas Aura in der Nähe.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "Besonders von dieser Kette gehen starke\nSchwingungen aus. Die Wahrscheinlichkeit,\ndass Zelda mit ihr gefesselt wurde, liegt bei 95 %.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ich vermute, dass Zelda irgendwie entkommen konnte.\nIch rate zur Eile.")
          }

