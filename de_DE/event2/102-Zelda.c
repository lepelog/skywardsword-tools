          void entrypoint_102_15() {
/*<183>*/ 	start()
/*<184>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Wenn du auf deinem Wolkenvogel\nreitest, drücke jederzeit (2), um dir die\n<color red<Steuerung>coloroff> anzeigen zu lassen.<0x10011:0x05cd>\n\nAußerdem kannst du (A) drücken, um\n<color red<kurz zu beschleunigen>coloroff> oder\n<color green<anzugreifen>coloroff>. Drücke (B), um <color red<langsamer\nzu werden>coloroff>.<0x10011:0x01cd>")
          }

          void entrypoint_102_16() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<heroname>!\nFalls du <color red<schneller fliegen >coloroff>möchtest...\n\n\n<color green<Bewege>coloroff> die Wii-Fernbedienung \n<color green<ruckartig nach oben und unten>coloroff>, \num an <color red<Höhe >coloroff>zu gewinnen, und \n<color green<neige sie dann nach unten>coloroff>!\nImmer wieder ruckartig nach oben\nund unten bewegen, dann nach unten\nneigen. Das ist der ganze Trick!")
          }

          void entrypoint_102_01() {
          	start()
/*<199>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 26, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Ich komme, sobald sich mein Vogel ein\nwenig ausgeruht hat, <heroname>.\n\n\n<0x10009:0x00000500>Frag doch mal die anderen, ob sie nicht\netwas über deinen Wolkenvogel wissen.")
          }

          void entrypoint_102_02() {
/*<  2>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 15, 'param3': 32}
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 1, 'next': 78, 'param3': 17}
/*< 78>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Da bist du ja, <heroname>...\n\n\n\n<0x1000A:0x001700cd>Ich habe gehört, dass du auf dem Weg\nzum Wasserfall bist und dich von der\nLuft aus gesucht.\n\nUnd? Hast du deinen Wolkenvogel\ngefunden?")
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x01000514>Hm...\n\n\n\n<0x10009:0x01000c00>Bado und seine Kumpels sollen sich oft\ndort hinten herumtreiben. Gehen wir!")
/*<138>*/ 	set_camera(22, 0)
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 203, 'param3': 24}
/*<203>*/ 	wait_frames(30)
/*<137>*/ 	{'type': 'type3', 'subType': 4, 'param1': 260, 'param2': 528, 'next': 135, 'param3': 13}
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10006:0xfccd>...?<0x10006:0x00cd>")
/*<170>*/ 	set_camera(25, 0)
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x01001500>Wer...?\n\n\n\n<0x10009:0x01001500>Wer ruft da?")
/*<139>*/ 	set_camera(24, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 4, 'param1': 268, 'param2': 5376, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Oh... Tut mir leid... Ich war kurz\nabgelenkt... Gehen wir!")
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_03() {
/*<  4>*/ 	start()
/*<201>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1004, 'next': 102, 'param3': 24}
/*<102>*/ 	set_camera(4, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 16, 'param3': 32}
/*< 16>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 257, 'next': 79, 'param3': 15}
/*< 79>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 100, 'next': 80, 'param3': 15}
/*< 80>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 356, 'next': 181, 'param3': 14}
/*<181>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 104, 'param3': 40}
/*<104>*/ 	{'type': 'type3', 'subType': 4, 'param1': 273, 'param2': 4864, 'next': 81, 'param3': 13}
/*< 81>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 1, 'next': 105, 'param3': 14}
/*<105>*/ 	set_camera(1, 0)
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 99, 'next': 106, 'param3': 50}
/*<106>*/ 	{'type': 'type3', 'subType': 4, 'param1': 270, 'param2': 4360, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Da ist er ja!")
/*< 21>*/ 	set_camera(2, 0)
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00090500><0x10008:0x01cd>Dein Wolkenvogel!")
/*< 17>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 18, 'param3': 17}
/*< 18>*/ 	set_camera(3, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_04() {
/*<  6>*/ 	start()
/*< 73>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001514>Das ging wohl daneben...\n\n\n\n<0x10009:0x00000c00><color green<Neige>coloroff> im <color red<Flug>coloroff> die Wii-Fernbedienung,\num deinen Fall auszubalancieren und\ndie Richtung zu bestimmen.\n\nVersuchen wir es noch einmal! Diesmal\nschubse ich dich nicht, also nimm all\ndeinen Mut zusammen und spring!\n\n<color green<Sprinte>coloroff> über die Plattform, um\nabzuspringen. Und vergiss nicht, vor\nder Landung (B) zu drücken!<0x10011:0x01cd>\n\nVersuche, genau in der <color red<Mitte des\nrunden Reliefs >coloroff>zu landen! ")
/*< 75>*/ 		scene_flags[0 'Skyloft'][3 /* 0x1 08 */] = false;
/*<235>*/ 		switch (story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */]) {
          		  case 0:
          		  case 1:
/*<236>*/ 			story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */] = true;
/*<237>*/ 			story_flags[832 /* us: 805A9B32 0x01, jp: 805ACDB2 0x01 */] = true;
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[39 /* us: 805A9AE5 0x20, jp: 805ACD65 0x20 */]) {
          		  case 0:
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000004>Dann versuchen wir es noch einmal!\nDiesmal schubse ich dich nicht, also\nnimm all deinen Mut zusammen und\nspring!\n<color green<Sprinte>coloroff> über die Plattform, um\nabzuspringen.\n\n\nVergiss nicht, vor der Landung (B) zu\ndrücken, um den Paraschal zu öffnen!<0x10011:0x01cd>\nUnd versuche, genau in der <color red<Mitte\ndes runden Reliefs >coloroff>zu landen! ")
          		  case 1:
/*<  8>*/ 			switch (story_flags[26 /* us: 805A9ADA 0x04, jp: 805ACD5A 0x04 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000f0513>Wie schrecklich...\n\n\n\n<heroname>!\nKannst du diese Bretter vor der Höhle\nnicht irgendwie entfernen?")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000006>Worauf wartest du, <heroname>?\nSchnell!")
          			}
          		}
          	}
          }

          void entrypoint_102_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */] = true;
/*< 13>*/ 	changeScene(9, 0) // 
          }

          void entrypoint_102_06() {
/*< 22>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1001, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 1, line: 19 */ "<0x10009:0x000c0e09>Dein Wolkenvogel ist einfach\nunglaublich, und das nach all dem, was\ner heute schon durchmachen musste!\n\n<0x10009:0x00000c00>Ich werde nun meinem Vater berichten.")
/*< 64>*/ 	set_camera(10, 0)
/*<143>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 4864, 'next': 60, 'param3': 13}
/*< 60>*/ 	{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 0, 'next': 42, 'param3': 14}
/*< 42>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 43, 'param3': 32}
/*< 43>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 44, 'param3': 32}
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 144, 'param3': 32}
/*<144>*/ 	set_camera(9, 0)
/*<142>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 4, 'next': 93, 'param3': 14}
/*< 93>*/ 	set_camera(12, 0)
/*< 45>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 24, 'param3': 16}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 1, line: 20 */ "<0x10009:0x04000004>Hey! <heroname>!")
/*<146>*/ 	set_camera(9, 0)
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1038, 'param2': 11776, 'next': 145, 'param3': 13}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x04000000>Ach, du hast dein Federvieh gefunden?\n\n\n\n<0x1000A:0x000b00cd>Wir haben hier seit dem Morgen geübt.\nWarum kriegt ein Nichtskönner wie du\neigentlich immer eine Extrawurst, hä?")
/*< 95>*/ 	set_camera(12, 0)
/*< 96>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12606, 'next': 25, 'param3': 13}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 1, line: 22 */ "Und jetzt tauchst du hier auch noch mit\nZelda auf...\n\n\nAllein traust du dich wohl nicht, was?\n\n\n\n„Uuuh, Zeldalein und ich sind schon\nseit unserer Kindheit gute Freunde...“\n\n\n<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x04000017>Da bildest du dir mächtig was drauf\nein, stimmt's?<pause 60> <0x10009:0x040b0aff>So ist es doch, oder?")
/*< 65>*/ 	set_camera(13, 0)
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 6, 'next': 48, 'param3': 16}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 23 */ "<0x10009:0x0500000e>Bado redet die ganze Zeit davon, dass\ner Zelda heiraten wird und sie dann für\nimmer zusammen sind...")
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 1, line: 24 */ "<0x10009:0x06000014>Hihihi...")
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 66, 'param3': 17}
/*< 66>*/ 	set_camera(12, 0)
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 1, line: 25 */ "<0x10009:0x040d0b00>Ha!\n\n\n\n<0x10009:0x04000b00>Der Sieger der Zeremonie, und das\nwerde natürlich ich sein, erhält von der\nVertreterin der Göttin, also Zelda, den\n<color yellow<Paraschal>coloroff>!\nUnd niemals werde ich zulassen, dass\njemand anderes mir dieses Geschenk\nwegschnappt. Es ist von ihr selbst\ngemacht!!!")
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 29, 'param3': 17}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 1, line: 26 */ "<0x10009:0x04041700>Den Paraschal, den sie selbst\ngetragen hat... in meiner Hand...\ner riecht bestimmt toll... Hach...\n\nUnd dann noch die Zeremonie für den\nSieger auf der Statue der Göttin...\n\n\nNur wir beide...\nUngestört...\nZelda und ich, ganz allein da oben...")
/*<107>*/ 	set_camera(17, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 5644, 'next': 109, 'param3': 13}
/*<109>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "He... Hehehe...\n\n\n\nTihihihi...")
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 110, 'param3': 50}
/*<110>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1296, 'param2': 3865, 'next': 111, 'param3': 13}
/*<111>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1552, 'param2': 2060, 'next': 67, 'param3': 13}
/*< 67>*/ 	set_camera(18, 0)
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 2, line: 28 */ "Bado! Bado!\n<pause 30>Hinter dir!<pause 30> Hinter dir!!!")
/*< 52>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 31, 'param3': 16}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 1, line: 29 */ "<0x10009:0x04000000><0x1000A:0x000b00cd>Was ist denn?!? Stört mich nicht!")
/*< 61>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 0, 'next': 92, 'param3': 15}
/*< 92>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 4, 'next': 97, 'param3': 17}
/*< 97>*/ 	set_camera(14, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x04191715>Argh!")
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 6, 'next': 147, 'param3': 16}
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 4103, 'next': 90, 'param3': 13}
/*< 90>*/ 	set_camera(19, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "Wir beide, wie? „Ganz allein“, ja?")
/*< 68>*/ 	set_camera(15, 0)
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 16}
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 1, line: 32 */ "<0x10009:0x04ffff0d>Öh... Äh... Ja...\n\n\n\n<0x10009:0x04000000>Ja, also, <heroname>!\nGut, dass du deinen Vogel gefunden\nhast! Das wird ein guter, ehrlicher\nWettkampf!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 86, 'param3': 17}
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x04000000>Bis dann, Zelda!\nUnd bei der Zeremonie immer schön\nauf mich schauen, ja? Ich bin der,\nder fliegen kann...")
/*< 62>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 4, 'next': 56, 'param3': 14}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 91, 'param3': 16}
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 4, 'next': 98, 'param3': 17}
/*< 98>*/ 	set_camera(18, 0)
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 1, line: 34 */ "<0x10009:0x05050013><0x10009:0x06070000>Hey, Bado!\nWarte auf uns!<0x10005:0x00140000>")
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1298, 'param2': 4352, 'next': 100, 'param3': 13}
/*<100>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1553, 'param2': 4096, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(0, 5)
/*<115>*/ 	make_actor_do_something(0, 6)
/*<116>*/ 	wait_frames(50)
/*<205>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 206, 'param3': 16}
/*<206>*/ 	wait_frames(5)
/*< 69>*/ 	set_camera(16, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 1, line: 35 */ "<0x10009:0x00091014>„Ein guter, ehrlicher Wettkampf“?\nDa hätte ich einiges dazu zu sagen!\n\n\n<0x10009:0x0000ff00><heroname>, kümmer dich nicht\ndarum, was sie sagen. Gib heute dein\nBestes, ich glaube an dich!\nVersprichst du mir, zu gewinnen?\n[1-]Klar![2-]Öhm...[3-]Nur wir zwei?")
/*< 57>*/ 	switch (choice(3)) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x000c0e00>Genau!\nMit dieser Einstellung kannst du nur\ngewinnen, <heroname>!")
          		flw_101:
/*<101>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': -256, 'next': 207, 'param3': 13}
/*<207>*/ 		make_actor_do_something(0, 0)
/*< 58>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': -1, 'next': 221, 'param3': 16}
/*<221>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 112, 'next': 40, 'param3': 24}
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 2, line: 39 */ "Die Vogelreiter-Zeremonie beginnt!\nDie auserwählten Schüler bitte zum\nStart!")
/*< 59>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 1, line: 40 */ "Also dann, <heroname>!\nBis gleich!")
/*< 70>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 1, line: 37 */ "<0x10009:0x000c1500>Streng dich an, dann wird das schon.\nHab ein wenig Selbstvertrauen!")
          		goto flw_101
          	  case 2:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 1, line: 38 */ "<0x10009:0x00100e04>Bitte?!? Das hätte ich nicht von dir\ngedacht, <heroname>!")
          		goto flw_101
          	}
          }

          void entrypoint_102_07() {
/*< 71>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "")
          }

          void entrypoint_102_08() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Nach der ganzen Aufregung sollten\nwir noch einmal alles durchgehen.\nFühlst du dich bereit zu fliegen,\n<heroname>?")
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Du bestimmst die Richtung, in die dein\nWolkenvogel fliegt, indem du die\nWii-Fernbedienung <color green<nach links und\nrechts neigst>coloroff>.\nFalls du <color red<schneller fliegen >coloroff>möchtest...\n\n\n\n<color green<Bewege>coloroff> die Wii-Fernbedienung \n<color green<ruckartig nach oben und unten>coloroff>, \num an <color red<Höhe >coloroff>zu gewinnen, und \n<color green<neige sie dann nach unten>coloroff>!\nImmer wieder ruckartig nach oben\nund unten bewegen, dann nach unten\nneigen. Das ist der ganze Trick!")
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Und? Ist mit deinem Wolkenvogel alles\nin Ordnung?")
          }

          void entrypoint_102_09() {
/*< 88>*/ 	start()
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<heroname>, ich hatte schon das\nSchlimmste befürchtet, aber dein\nWolkenvogel scheint in Ordnung zu\nsein!\nVater und die anderen warten sicher\nschon, beeilen wir uns!")
          }

          void entrypoint_102_10() {
/*<112>*/ 	start()
/*<117>*/ 	set_camera(26, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 32}
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "")
/*<118>*/ 	set_camera(-1, 0)
          }

          void entrypoint_102_11() {
/*<121>*/ 	start()
/*<200>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 2, 'next': 122, 'param3': 13}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x1000D:0x1906><0x10008:0x01cd><heroname>!!!")
          }

          void entrypoint_102_12() {
/*<123>*/ 	start()
/*<208>*/ 	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = true;
/*<127>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<128>*/ 		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
/*<150>*/ 		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          		  case 0:
/*<151>*/ 			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
          			flw_152:
/*<152>*/ 			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          			  case 0:
/*<153>*/ 				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
          				flw_195:
/*<195>*/ 				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          				  case 0:
          					flw_174:
/*<174>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*<175>*/ 						switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          						  case 0:
/*<176>*/ 							story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
          							flw_131:
/*<131>*/ 							switch (story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */]) {
          							  case 0:
/*<197>*/ 								switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          								  case 0:
          									flw_159:
/*<159>*/ 									switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          									  case 0:
/*<160>*/ 										story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<162>*/ 										story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          										flw_166:
/*<166>*/ 										switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          										  case 0:
/*<167>*/ 											story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
          											flw_182:
/*<182>*/ 											story_flags[653 /* us: 805A9B1C 0x20, jp: 805ACD9C 0x20 */] = false;
/*<186>*/ 											story_flags[632 /* us: 805A9B1A 0x04, jp: 805ACD9A 0x04 */] = false;
/*<194>*/ 											story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<215>*/ 											switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
          											  case 0:
/*<217>*/ 												switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
          												  case 0:
          													flw_225:
/*<225>*/ 													switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          													  case 0:
/*<230>*/ 														switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          														  case 0:
/*<226>*/ 															story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
          															flw_227:
/*<227>*/ 															switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          															  case 0:
/*<229>*/ 																switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          																  case 0:
/*<228>*/ 																	story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
          																	flw_231:
/*<231>*/ 																	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          																	  case 0:
/*<232>*/ 																		story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
          																	  case 1:
          																	}
          																  case 1:
          																	goto flw_231
          																}
          															  case 1:
          																goto flw_231
          															}
          														  case 1:
          															goto flw_227
          														}
          													  case 1:
          														goto flw_227
          													}
          												  case 1:
/*<216>*/ 													story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          													goto flw_225
          												}
          											  case 1:
          												goto flw_225
          											}
          										  case 1:
          											goto flw_182
          										}
          									  case 1:
          										goto flw_166
          									}
          								  case 1:
/*<132>*/ 									switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
          									  case 0:
          										goto flw_159
          									  case 1:
/*<133>*/ 										switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
          										  case 0:
          											goto flw_159
          										  case 1:
/*<134>*/ 											scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
          											goto flw_159
          										}
          									}
          								}
          							  case 1:
          								goto flw_159
          							}
          						  case 1:
          							goto flw_131
          						}
          					  case 1:
          						goto flw_131
          					}
          				  case 1:
          					goto flw_174
          				}
          			  case 1:
          				goto flw_195
          			}
          		  case 1:
          			goto flw_152
          		}
          	  case 1:
          		goto flw_174
          	}
          }

          void entrypoint_102_13() {
/*<124>*/ 	start()
/*<209>*/ 	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = false;
/*<125>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<126>*/ 		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
/*<148>*/ 		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          		  case 0:
/*<149>*/ 			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
          			flw_154:
/*<154>*/ 			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          			  case 0:
/*<155>*/ 				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
          				flw_196:
/*<196>*/ 				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          				  case 0:
          					flw_198:
/*<198>*/ 					switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          					  case 0:
          						flw_156:
/*<156>*/ 						switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          						  case 0:
/*<220>*/ 							switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          							  case 0:
/*<157>*/ 								story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
          								flw_158:
/*<158>*/ 								switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          								  case 0:
/*<219>*/ 									switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          									  case 0:
/*<218>*/ 										story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
          										flw_161:
/*<161>*/ 										switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          										  case 0:
/*<163>*/ 											story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<164>*/ 											story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          											flw_165:
/*<165>*/ 											switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          											  case 0:
/*<185>*/ 												story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = false;
          												flw_168:
/*<168>*/ 												switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          												  case 0:
/*<169>*/ 													story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
          													flw_177:
/*<177>*/ 													switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          													  case 0:
          														flw_192:
/*<192>*/ 														switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          														  case 0:
/*<193>*/ 															story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */] = true;
          															flw_213:
/*<213>*/ 															switch (story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */]) {
          															  case 0:
/*<214>*/ 																story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = false;
          																flw_233:
/*<233>*/ 																switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          																  case 0:
/*<234>*/ 																	story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
          																	flw_238:
/*<238>*/ 																	temp_flags[53 /* 0x7 20 */] = false;
          																  case 1:
          																	goto flw_238
          																}
          															  case 1:
          																goto flw_233
          															}
          														  case 1:
          															goto flw_213
          														}
          													  case 1:
/*<222>*/ 														switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          														  case 0:
/*<178>*/ 															switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          															  case 0:
          																goto flw_192
          															  case 1:
/*<179>*/ 																story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          																goto flw_192
          															}
          														  case 1:
          															goto flw_192
          														}
          													}
          												  case 1:
          													goto flw_177
          												}
          											  case 1:
          												goto flw_168
          											}
          										  case 1:
          											goto flw_165
          										}
          									  case 1:
          										goto flw_161
          									}
          								  case 1:
          									goto flw_161
          								}
          							  case 1:
          								goto flw_158
          							}
          						  case 1:
          							goto flw_158
          						}
          					  case 1:
/*<130>*/ 						switch (scene_flags[65 /* 0x9 02 */]) {
          						  case 0:
/*<129>*/ 							scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          							goto flw_156
          						  case 1:
          							goto flw_156
          						}
          					}
          				  case 1:
          					goto flw_198
          				}
          			  case 1:
          				goto flw_196
          			}
          		  case 1:
          			goto flw_154
          		}
          	  case 1:
/*<212>*/ 		switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          		  case 0:
          			goto flw_198
          		  case 1:
/*<210>*/ 			story_flags[301 /* us: 805A9AFD 0x80, jp: 805ACD7D 0x80 */] = false;
/*<211>*/ 			scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = false;
          			goto flw_198
          		}
          	}
          }

          void entrypoint_102_14() {
/*<180>*/ 	start()
/*<204>*/ 	set_camera(30, 0)
/*<189>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "Zeldas Tagebuch...\nMöchtest du es lesen?\n[1-]Ja[2]Nein")
/*<190>*/ 	switch (choice(2)) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Morgen ist die <color red<Vogelreiter-Zeremonie>coloroff>!\nEin weiterer Schritt auf dem Weg zum\nRitter für <heroname>.\n\nIch kann es nicht erwarten, ihn endlich\nals Ritter zu sehen.\n\n\nAber in letzter Zeit hat er gar nicht\nmehr geübt...\n\n\nIch werde morgen sehr früh aufstehen\nund ihn zum Üben zwingen!\n\n\nEr muss unbedingt gewinnen, ich will\ndie Siegeszeremonie nur mit ihm\nfeiern!")
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Du liest das Tagebuch nicht.")
          	}
          }

