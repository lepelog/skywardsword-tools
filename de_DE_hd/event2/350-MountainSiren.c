          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf("Da sind wir, Link!\nAlso los, auf geht's!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.\nIch stelle fest, dass die Sammlung\nder <y<Tränen >>nicht erfolgreich war.")
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
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Gebieter, neben den <r<Hütern>>, die dich\nangreifen, gibt es noch die <r<Wächter>>,\nund zwar die <r<des Landes und des Himmels>>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Sammle alle <y<Tränen>>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("Die Orte, an denen du <y<Tränen>> gefunden hast,\nsind <r<auf der Karte markiert>>. Mach dir dies\nund die Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen, verändern\nsich nicht. Wenn du dir ansiehst, wo die Tränen zu\nfinden sind, kannst du die Prüfung bestehen.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Du solltest dir eine Taktik überlegen, etwa die <r<einfach\nzu findenden >><y<Tränen >>bis zum Schluss <r<aufzubewahren>>...")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("\x0E\x01\x12\x04\x00\x01Gebieter, die Chance erhöht sich, dass du nicht der\nAuserwählte bist...\n\n\nDie vielen Versuche haben Unordnung in deine\nSeele gebracht. Ich empfehle dir, dich ein wenig\nauszuruhen, bevor du es erneut versuchst.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("<r<Zwei Arten von Wächtern >>beschützen diesen\nOrt vor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der <r<Wächter des\nHimmels>> zu treten, dann geschieht dir nichts...\n\n\nWenn du allerdings den <r<Wächtern des Landes >>zu\nnahe kommst, werden sie dich verfolgen, \x0E\x01\x12\x04\x00\x02Gebieter...\n<r<Achte>> daher gut auf deine Bewegungen.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("Die Orte, an denen du bereits <y<Tränen >>gefunden\nhast, sind <r<auf der Karte markiert>>.\n\n\nIch empfehle dir, die Orte aller 15 <y<Tränen >>auf\nder Karte zu markieren.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen, etwa die <r<einfach\nzu findenden >><y<Tränen >>bis zum Schluss <r<aufzubewahren>>...\n\n\nSammle 15 <y<Tränen>> und kehre in diese Welt zurück.\nIch warte hier auf dich.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Wenn du das <y<Seelengefäß>> mit 15 <y<Tränen\n>>gefüllt hast, \x0E\x01\x12\x04\x00\x02Gebieter, wird deine Seele\nwachsen, und die Göttin wird dich stärken.\n\nIch werde in der äußeren Welt auf dich\nwarten, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf("An diesem Ort wird \x0E\x01\x12\x04\x00\x02deine <r<Kraft >>auf die\nProbe gestellt. Dies ist <b<Dins Sairen>>.\n\n\nUm die letzte der Flammen, die dein\nSchwert stärken, zu erhalten, musst du\ndiese Prüfung bestehen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf("Bringe das <y<Seelengefäß>> zurück, wenn es\ngefüllt ist, und deine Seele wird wachsen,\n\x0E\x01\x12\x04\x00\x02Gebieter. Als Lohn wird dich die Göttin\nmit <r<neuer Kraft>> beschenken.\nHast du noch Fragen an mich?\n[1]Ja![2-]Nein, ich\nbin bereit.")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Welche Erklärung möchtest du hören?\n\n\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Keine")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...\n\n\n\nFülle das <y<Seelengefäß>>, indem du <y<Dins Tränen\n>>aufsammelst.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf("Was dort funkelt...")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf("Dies ist eine von <y<Din>><y<s Tränen>>.\nSammle <r<15>> von ihnen.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Willst du sonst noch etwas wissen?\n\n\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Nein")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf("Solltest du auch nur einen Schritt vom rechten Weg\nabkommen, werden dich die <r<Hüter>> verfolgen,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Ein einziger Treffer der <r<Hüter>> wird deine Seele aus\nder Fassung bringen, und deine Prüfung wird zu Ende\nsein, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf("Sammle die <y<Tränen>>, ohne dich angreifen zu lassen,\nund fülle das <y<Seelengefäß>>.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Über die ganze Gegend sind glitzernde Flächen\nverstreut, die <r<Alatraumata >>genannt werden...\n\n\nTrittst du auf sie, so <r<werden dich die Hüter\nsofort entdecken>>.\n\n\nPass also auf, wohin du deine Schritte setzt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("Ich werde hier in dieser Welt auf deine\nRückkehr warten, \x0E\x01\x12\x04\x00\x02Gebieter.")
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

