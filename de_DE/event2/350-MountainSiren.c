          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "Da sind wir, <heroname>!\nAlso los, auf geht's!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2, line: 17 */ "<0x10012:0x00000004>Gebieter, <heroname>.\nIch stelle fest, dass die Sammlung\nder <color yellow<Tränen >coloroff>nicht erfolgreich war.")
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
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "<0x10012:0x00000001>Gebieter, neben den <color red<Hütern>coloroff>,\ndie dich angreifen, gibt es noch die\n<color red<Wächter>coloroff>, und zwar die <color red<des Landes\nund des Himmels>coloroff>.\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Sammle alle <color yellow<Tränen>coloroff>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "Die Orte, an denen du <color yellow<Tränen>coloroff> gefunden\nhast, sind <color red<auf der Karte markiert>coloroff>.\nMach dir dies und die Signallichter\nzunutze.\nDie Orte, an denen die 15 Tränen\nruhen, verändern sich nicht. Wenn du\ndir ansiehst, wo die Tränen zu finden\nsind, kannst du die Prüfung bestehen.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2, line: 23 */ "Du solltest dir eine Taktik überlegen,\netwa die <color red<einfach zu findenden >coloroff><color yellow<Tränen\n>coloroff>bis zum Schluss <color red<aufzubewahren>coloroff>...")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2, line: 22 */ "<0x10012:0x00000001>Gebieter, die Chance erhöht sich, dass\ndu nicht der Auserwählte bist...\n\n\nDie vielen Versuche haben Unordnung\nin deine Seele gebracht. Ich empfehle\ndir, dich ein wenig auszuruhen, bevor\ndu es erneut versuchst.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "<color red<Zwei Arten von Wächtern >coloroff>beschützen\ndiesen Ort vor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der\n<color red<Wächter des Himmels>coloroff> zu treten, dann\ngeschieht dir nichts...\n\nWenn du allerdings den <color red<Wächtern des\nLandes >coloroff>zu nahe kommst, werden sie\ndich verfolgen, <0x10012:0x00000002>Gebieter...\n<color red<Achte>coloroff> daher gut auf deine Bewegungen.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2, line: 20 */ "Die Orte, an denen du bereits <color yellow<Tränen\n>coloroff>gefunden hast, sind <color red<auf der Karte\nmarkiert>coloroff>.\n\nIch empfehle dir, die Orte aller 15\n<color yellow<Tränen>coloroff> auf der Karte zu markieren. ")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2, line: 19 */ "<0x10012:0x00000002>Gebieter, du kannst die Prüfung der\nGöttin so lange ablegen, bis du dich\nihrer würdig erwiesen hast.\n\nDu solltest dir eine Taktik überlegen,\netwa die <color red<einfach zu findenden >coloroff><color yellow<Tränen\n>coloroff>bis zum Schluss <color red<aufzubewahren>coloroff>...\n\nSammle 15 <color yellow<Tränen>coloroff> und kehre in diese\nWelt zurück. Ich warte hier auf dich.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2, line: 16 */ "Wenn du das <color yellow<Seelengefäß>coloroff> mit 15\n<color yellow<Tränen >coloroff>gefüllt hast, <0x10012:0x00000002>Gebieter,\nwird deine Seele wachsen, und die\nGöttin wird dich stärken.\nIch werde in der äußeren Welt auf dich\nwarten, <0x10012:0x00000002>Gebieter.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "An diesem Ort wird <0x10012:0x00000002>deine <color red<Kraft >coloroff>auf die\nProbe gestellt. Dies ist <color blue<Dins Sairen>coloroff>. \n\n\nUm die letzte der Flammen, die dein\nSchwert stärken, zu erhalten, musst du\ndiese Prüfung bestehen, <0x10012:0x00000002>Gebieter.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "Bringe das <color yellow<Seelengefäß>coloroff> zurück, wenn\nes gefüllt ist, und deine Seele wird\nwachsen, <0x10012:0x00000002>Gebieter. Als Lohn wird dich\ndie Göttin mit <color red<neuer Kraft>coloroff> beschenken.\nHast du noch Fragen an mich?\n[1-]Ja![2]Nein, ich\nbin bereit.")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Welche Erklärung möchtest du hören?\n\n\n\n[1-]Seelengefäß[2-]Hüter[3-]Alatrauma[4]Keine")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 2, unk: 2, line: 7 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...\n\n\n\nFülle das <color yellow<Seelengefäß>coloroff>, indem du\n<color yellow<Dins Tränen >coloroff>aufsammelst.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 2, line: 8 */ "Was dort funkelt...")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Dies ist eine von <color yellow<Din>coloroff><color yellow<s Tränen>coloroff>.\nSammle <color red<15>coloroff> von ihnen.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2, line: 4 */ "Willst du sonst noch etwas wissen?\n\n\n\n[1-]Seelengefäß[2-]Hüter[3-]Alatrauma[4]Nein")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 11 */ "Solltest du auch nur einen Schritt vom\nrechten Weg abkommen, werden dich\ndie <color red<Hüter>coloroff> verfolgen, <0x10012:0x00000002>Gebieter.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Ein einziger Treffer der <color red<Hüter>coloroff> wird\ndeine Seele aus der Fassung bringen,\nund deine Prüfung wird zu Ende sein,\n<0x10012:0x00000002>Gebieter.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 2, unk: 2, line: 13 */ "Sammle die <color yellow<Tränen>coloroff>, ohne dich\nangreifen zu lassen, und fülle das\n<color yellow<Seelengefäß>coloroff>.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "<0x10012:0x00000005>Gebieter, höre meine Antwort...")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2, line: 14 */ "Über die ganze Gegend sind glitzernde\nFlächen verstreut, die <color red<Alatraumata\n>coloroff>genannt werden...\n\nTrittst du auf sie, so <color red<werden dich die\nHüter sofort entdecken>coloroff>.\n\n\nPass also auf, wohin du deine\nSchritte setzt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2, line: 5 */ "Sehr wohl, <0x10012:0x00000005>Gebieter.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Ich werde hier in dieser Welt auf deine\nRückkehr warten, <0x10012:0x00000002>Gebieter.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

