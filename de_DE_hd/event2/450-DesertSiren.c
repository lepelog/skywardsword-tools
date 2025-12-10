          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "Da sind wir, <heroname>!\nAlso los, auf geht's!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Gebieter, <heroname>.\nIch stelle fest, dass die Sammlung der <color yellow<Tränen >coloroff>nicht\nerfolgreich war.")
/*< 48>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Gebieter, neben den <color red<Hütern>coloroff>, die dich angreifen,\ngibt es noch die <color red<Wächter>coloroff>, und zwar die <color red<des Landes\nund des Himmels>coloroff>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Sammle alle <color yellow<Tränen>coloroff>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "Die Orte, an denen du <color yellow<Tränen>coloroff> gefunden hast,\nsind <color red<auf der Karte markiert>coloroff>. Mach dir dies und\ndie Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen, verändern\nsich nicht. Wenn du dir ansiehst, wo die Tränen zu\nfinden sind, kannst du die Prüfung bestehen.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Du solltest dir eine Taktik überlegen, etwa die <color red<einfach\nzu findenden >coloroff><color yellow<Tränen >coloroff>bis zum Schluss <color red<aufzubewahren>coloroff>...")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "<0x10012:0x00000001>Gebieter, die Chance erhöht sich, dass du nicht der\nAuserwählte bist...\n\n\nDie vielen Versuche haben Unordnung in deine\nSeele gebracht. Ich empfehle dir, dich ein wenig\nauszuruhen, bevor du es erneut versuchst.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "<color red<Zwei Arten von Wächtern >coloroff>beschützen diesen Ort\nvor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der <color red<Wächter des\nHimmels>coloroff> zu treten, dann geschieht dir nichts...\n\n\nWenn du allerdings den <color red<Wächtern des Landes >coloroff>zu nahe\nkommst, werden sie dich verfolgen, <0x10012:0x00000002>Gebieter...\n<color red<Achte>coloroff> daher gut auf deine Bewegungen.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "Die Orte, an denen du bereits <color yellow<Tränen >coloroff>gefunden hast,\nsind <color red<auf der Karte markiert>coloroff>.\n\n\nIch empfehle dir, die Orte aller 15 <color yellow<Tränen>coloroff> auf der\nKarte zu markieren.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "<0x10012:0x00000002>Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen,\netwa die einfach zu findenden <color yellow<Tränen >coloroff>für\nden Fall <color red<aufzusparen>coloroff>, dass du entdeckt wirst.\n\nSammle 15 <color yellow<Tränen>coloroff> und kehre in die äußere\nWelt zurück. Ich werde dort auf dich warten.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Wenn du das <color yellow<Seelengefäß>coloroff> mit 15 <color yellow<Tränen >coloroff>gefüllt hast,\n<0x10012:0x00000002>Gebieter, wird deine Seele wachsen, und die Göttin\nwird dich stärken.\n\nIch werde in der äußeren Welt auf dich warten,\n<0x10012:0x00000002>Gebieter.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "<0x10012:0x00000002>Gebieter, in diese Welt kann ich dir nicht folgen,\nda sie in deiner Seele selbst existiert, doch ich kann\nzu dir sprechen.\n\nNur Auserwählten gewährt die Göttin Zutritt zu\ndiesem Ort, der <color blue<Sairen>coloroff>.\n\n\nAn diesem Ort, <color blue<Nayrus Sairen>coloroff>, wird deine <color red<Weisheit\n>coloroff>auf die Probe gestellt.\n\n\nUm die heilige Flamme, deren Kraft das Schwert\nstärkt, zu erhalten, musst du diese Prüfung bestehen.\nNur so wird deine Seele wachsen, <0x10012:0x00000002>Gebieter.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Bringe das <color yellow<Seelengefäß>coloroff> zurück, wenn es gefüllt ist,\nund deine Seele wird wachsen, <0x10012:0x00000002>Gebieter. Als Lohn\nwird dich die Göttin mit <color red<neuer Kraft>coloroff> beschenken.\n\nHast du noch Fragen an mich?\n[1-]Ja![2]Nein, ich\nbin bereit.")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Welche Erklärung möchtest du hören?\n\n[1-]Seelengefäß[2-]Hüter[3-]Alatrauma[4]Keine")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...\n\n\n\nFülle das <color yellow<Seelengefäß>coloroff>, indem du <color yellow<Nayrus Tränen\n>coloroff>aufsammelst.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "<0x10012:0x00000002>Gebieter, was dort funkelt...")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Dies ist eine von <color yellow<Nayrus Tränen>coloroff>.\nSammle <color red<15>coloroff> von ihnen.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Willst du sonst noch etwas wissen?\n\n\n[1-]Seelengefäß[2-]Hüter[3-]Alatrauma[4]Nein")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Solltest du auch nur einen Schritt vom rechten\nWeg abkommen, werden dich die <color red<Hüter>coloroff> verfolgen,\n<0x10012:0x00000002>Gebieter.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Ein einziger Treffer der <color red<Hüter>coloroff> wird deine Seele\naus der Fassung bringen, und deine Prüfung wird\nzu Ende sein, <0x10012:0x00000002>Gebieter.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 0, unk: 4, line: 14 */ "Sammle die <color yellow<Tränen>coloroff>, ohne dich angreifen zu lassen,\nund fülle das <color yellow<Seelengefäß>coloroff>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "Über die ganze Gegend sind glitzernde Flächen\nverstreut, die <color red<Alatraumata >coloroff>genannt werden...\n\n\nTrittst du auf sie, so <color red<werden dich die Hüter\nsofort entdecken>coloroff>. Pass also auf, wohin du\ndeine Schritte setzt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "Nun gut, mein <0x10012:0x00000005>Gebieter.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Ich werde hier in dieser Welt auf deine\nRückkehr warten, <0x10012:0x00000002>Gebieter.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[24 'Lanayru: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 76>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 74>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

