          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf("Da sind wir, Link!\nAlso los, auf geht's!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.\nIch stelle fest, dass die Sammlung der <y<Tränen >>nicht\nerfolgreich war.")
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
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Gebieter, neben den <r<Hütern>>, die dich angreifen,\ngibt es noch die <r<Wächter>>, und zwar die <r<des Landes\nund des Himmels>>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Sammle alle <y<Tränen>>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("Die Orte, an denen du <y<Tränen>> gefunden hast,\nsind <r<auf der Karte markiert>>. Mach dir dies und\ndie Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen, verändern\nsich nicht. Wenn du dir ansiehst, wo die Tränen zu\nfinden sind, kannst du die Prüfung bestehen.")
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
/*< 26>*/ 							printf("<r<Zwei Arten von Wächtern >>beschützen diesen Ort\nvor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der <r<Wächter des\nHimmels>> zu treten, dann geschieht dir nichts...\n\n\nWenn du allerdings den <r<Wächtern des Landes >>zu nahe\nkommst, werden sie dich verfolgen, \x0E\x01\x12\x04\x00\x02Gebieter...\n<r<Achte>> daher gut auf deine Bewegungen.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("Die Orte, an denen du bereits <y<Tränen >>gefunden hast,\nsind <r<auf der Karte markiert>>.\n\n\nIch empfehle dir, die Orte aller 15 <y<Tränen>> auf der\nKarte zu markieren.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen,\netwa die einfach zu findenden <y<Tränen >>für\nden Fall <r<aufzusparen>>, dass du entdeckt wirst.\n\nSammle 15 <y<Tränen>> und kehre in die äußere\nWelt zurück. Ich werde dort auf dich warten.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Wenn du das <y<Seelengefäß>> mit 15 <y<Tränen >>gefüllt hast,\n\x0E\x01\x12\x04\x00\x02Gebieter, wird deine Seele wachsen, und die Göttin\nwird dich stärken.\n\nIch werde in der äußeren Welt auf dich warten,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf("\x0E\x01\x12\x04\x00\x02Gebieter, in diese Welt kann ich dir nicht folgen,\nda sie in deiner Seele selbst existiert, doch ich kann\nzu dir sprechen.\n\nNur Auserwählten gewährt die Göttin Zutritt zu\ndiesem Ort, der <b<Sairen>>.\n\n\nAn diesem Ort, <b<Nayrus Sairen>>, wird deine <r<Weisheit\n>>auf die Probe gestellt.\n\n\nUm die heilige Flamme, deren Kraft das Schwert\nstärkt, zu erhalten, musst du diese Prüfung bestehen.\nNur so wird deine Seele wachsen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf("Bringe das <y<Seelengefäß>> zurück, wenn es gefüllt ist,\nund deine Seele wird wachsen, \x0E\x01\x12\x04\x00\x02Gebieter. Als Lohn\nwird dich die Göttin mit <r<neuer Kraft>> beschenken.\n\nHast du noch Fragen an mich?\n[1]Ja![2-]Nein, ich\nbin bereit.")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Welche Erklärung möchtest du hören?\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Keine")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...\n\n\n\nFülle das <y<Seelengefäß>>, indem du <y<Nayrus Tränen\n>>aufsammelst.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf("\x0E\x01\x12\x04\x00\x02Gebieter, was dort funkelt...")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf("Dies ist eine von <y<Nayrus Tränen>>.\nSammle <r<15>> von ihnen.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Willst du sonst noch etwas wissen?\n\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Nein")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf("Solltest du auch nur einen Schritt vom rechten\nWeg abkommen, werden dich die <r<Hüter>> verfolgen,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Ein einziger Treffer der <r<Hüter>> wird deine Seele\naus der Fassung bringen, und deine Prüfung wird\nzu Ende sein, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf("Sammle die <y<Tränen>>, ohne dich angreifen zu lassen,\nund fülle das <y<Seelengefäß>>.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Über die ganze Gegend sind glitzernde Flächen\nverstreut, die <r<Alatraumata >>genannt werden...\n\n\nTrittst du auf sie, so <r<werden dich die Hüter\nsofort entdecken>>. Pass also auf, wohin du\ndeine Schritte setzt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("Nun gut, mein \x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("Ich werde hier in dieser Welt auf deine\nRückkehr warten, \x0E\x01\x12\x04\x00\x02Gebieter.")
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

