          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "Da sind wir, <heroname>!\nAlso los, auf geht's!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Gebieter, <heroname>.\nIch stelle fest, dass die Sammlung\nder <color yellow<Tränen >coloroff>nicht erfolgreich war.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Gebieter, neben den <color red<Hütern>coloroff>, die dich angreifen,\ngibt es noch die <color red<Wächter>coloroff>, und zwar die <color red<des Landes\nund des Himmels>coloroff>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Sammle alle <color yellow<Tränen>coloroff>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "Die Orte, an denen du <color yellow<Tränen>coloroff> gefunden hast,\nsind <color red<auf der Karte markiert>coloroff>. Mach dir dies und\ndie Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen, verändern\nsich nicht. Wenn du dir ansiehst, wo die Tränen zu\nfinden sind, kannst du die Prüfung bestehen.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Du solltest dir eine Taktik überlegen, etwa die <color red<einfach\nzu findenden >coloroff><color yellow<Tränen >coloroff>bis zum Schluss <color red<aufzubewahren>coloroff>...")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "<0x10012:0x00000001>Gebieter, die Chance erhöht sich, dass du nicht\nder Auserwählte bist...\n\n\nDie vielen Versuche haben Unordnung in dein\nHerz gebracht. Ich empfehle dir, dich erst\neinmal ein wenig auszuruhen.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "<color red<Zwei Arten von Wächtern >coloroff>beschützen diesen Ort\nvor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der <color red<Wächter des\nHimmels>coloroff> zu treten, dann geschieht dir nichts...\n\n\nWenn du allerdings den <color red<Wächtern des Landes >coloroff>zu\nnahe kommst, werden sie dich verfolgen, <0x10012:0x00000002>Gebieter...\n<color red<Achte>coloroff> daher gut auf deine Bewegungen.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "Die Orte, an denen du bereits <color yellow<Tränen >coloroff>gefunden hast,\nsind <color red<auf der Karte markiert>coloroff>.\n\n\nIch empfehle dir, die Orte aller 15 <color yellow<Tränen >coloroff>auf der\nKarte zu markieren.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "<0x10012:0x00000002>Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen, etwa die <color red<einfach\nzu findenden >coloroff><color yellow<Tränen >coloroff>bis zum Schluss <color red<aufzubewahren>coloroff>...\n\n\nSammle 15 <color yellow<Tränen>coloroff> und kehre in diese Welt zurück.\nIch warte hier auf dich.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Wenn du das <color yellow<Seelengefäß>coloroff> mit 15 <color yellow<Tränen >coloroff>gefüllt hast,\n<0x10012:0x00000002>Gebieter, wird deine Seele wachsen, und die Göttin\nwird dich stärken.\n\nIch werde in der äußeren Welt auf dich warten,\n<0x10012:0x00000002>Gebieter.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Dies ist die Welt der letzten Prüfung,\ndie <color blue<Sairen der Göttin>coloroff>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Wenn du deinen Heldenmut unter Beweis gestellt und\ndas letzte <color yellow<Seelengefäß >coloroff>gefüllt hast, <0x10012:0x00000002>Gebieter...\n\n\nDann wird die Tür zum <color yellow white<Triforce>coloroff> vor deinen Augen\nerscheinen. Du musst diese Prüfung bestehen.\n\n\nHast du noch eine Frage an mich?\n[1-]Ja[2]Nein")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Welche Erklärung möchtest du hören?\n\n[1-]Seelengefäß[2-]Hüter[3-]Alatrauma[4]Keine")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...\n\n\n\nFülle das <color yellow<Seelengefäß>coloroff>, indem du die <color yellow<heiligen Tränen\n>coloroff>aufsammelst.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "<0x10012:0x00000002>Gebieter, was dort funkelt...")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Dies ist eine <color yellow<heilige Träne>coloroff>.\nSammle <color red<15>coloroff> von ihnen.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					wait_frames(15)
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Willst du sonst noch etwas wissen?\n\n\n[1-]Seelengefäß[2-]Hüter[3-]Alatrauma[4]Nein")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Solltest du auch nur einen Schritt vom rechten Weg\nabkommen, werden dich die <color red<Hüter>coloroff> verfolgen,\n<0x10012:0x00000002>Gebieter.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Ein einziger Treffer der <color red<Hüter>coloroff> wird dein Herz aus\nder Fassung bringen, und deine Prüfung wird zu\nEnde sein, <0x10012:0x00000002>Gebieter.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Sammle die <color yellow<Tränen>coloroff>, ohne dich angreifen zu lassen,\nund fülle das <color yellow<Seelengefäß>coloroff>.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 4, line: 14 */ "Über die ganze Gegend sind glitzernde Flächen\nverteilt, die <color red<Alatraumata >coloroff>genannt werden...\n\n\nTrittst du auf sie, so <color red<werden dich die Hüter\nsofort entdecken>coloroff>.\n\n\nPass also auf, wohin du deine Schritte setzt.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "Sehr wohl, <0x10012:0x00000005>Gebieter.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Ich werde hier in dieser Welt auf deine\nRückkehr warten, <0x10012:0x00000002>Gebieter.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

