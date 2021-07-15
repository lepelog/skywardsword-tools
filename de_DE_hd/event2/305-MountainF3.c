          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x700Willst du vielleicht noch etwas anderes wissen?\n[1]<b<Wasserdrache>>[2]<b<Donnerdrache>>[3]Vulkan[4-]Nein")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x07\x702Der <b<Wasserdrache>>...\nEr ist ein Diener der Göttin, der im\nWald haust...\n\n\x0E\x01\x09\x04\x00\x700Stark und starrsinnig zugleich...\nWerde niemals zur Zielscheibe seines Zorns!\n\n\n\x0E\x01\x09\x04\x00\x703Guah-hahaha!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x07\x702Der <b<Donnerdrache>>...\nEin Diener der Göttin, der über die\nWüste herrscht... Er ist der Wächter\ndes <r<legendären Schildes>>.\n\x0E\x01\x09\x04\x00\x700Man sagt, er liebe es, all diejenigen,\ndie den Schild begehren, auf die Probe\nzu stellen...\n\nUnd glaub mir, seine Probe ist keine leichte...\n\n\n\n\x0E\x01\x09\x04\x00\x03Guah-hahaha!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x07\x702Hm... Es ist nicht so, dass dieser Berg schon\nimmer so wild und gefährlich gewesen wäre...\n\n\n\x0E\x01\x09\x04\x00\x700Die Ober- und die Unterwelt lebten unter dem\nSegen des Berges miteinander.\n\n\n\x0E\x01\x09\x04\x00\x700Heute erinnert seine Gestalt schmerzhaft an\njene gute alte Zeit...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x702Ach so?\nNun, du weißt ja, wo es raus geht...")
          			}
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x701Hm... Du bist es!\n\n\n\n\x0E\x01\x09\x04\x00\x700Was führt dich zu mir, kleiner Held?\nWillst du mich etwas fragen?\n[1]<b<Wasserdrache>>[2]<b<Donnerdrache>>[3]Vulkan[4-]Nichts")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf("Der Ausbruch des Vulkans war das Werk\nmeines Zorns. Und du bist hineingeraten...\n\n\nVerzeih mir!\nSchon bald werden sich Erde und Himmel\nin ein freundlicheres Licht färben...\nJetzt kannst du aufbrechen!")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf("Der Ausbruch des Vulkans war das Werk\nmeines Zorns. Und du bist hineingeraten...\n\n\nVerzeih mir!\nSchon bald werden sich Erde und Himmel\nin ein freundlicheres Licht färben...\nJetzt kannst du aufbrechen!")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 2, 'param3': 16}
/*<  2>*/ 	printf("\x0E\x01\x09\x04\x00\x10Da guckst du, was? Ich rette dich!")
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x0F\xF08Es freut mich, dich wiederzusehen!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Wie?\nDu kennst mich nicht mehr?\n\n\n\x0E\x01\x09\x04\x0E\xE00Ich bin <b<Platio>> von den Mogma.\nWir sind uns am nördlichen Tempel begegnet...\n\n\n\x0E\x01\x09\x04\x0E\xE00Ich habe gesehen, wie sie dich fortgetragen\nhaben, und bin dir gefolgt...")
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x0D\xE0ADu weißt das wirklich nicht mehr?\nWas wolltest du eigentlich hier?\n[1]Also...[2]Ich suche...")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Einen... Drachen?\nMeinst du etwa den Gott?\n\n\nIch habe nämlich gehört, dass in diesem Berg\nein Gott wohnen soll...\n\n\n\x0E\x01\x09\x04\x0F\x210ADu stehst auf solche Geschichten, was?\n\n\n\n\x0E\x01\x09\x04\x0D\x00Wie? Was ich hier mache?\n\n\n\n\x0E\x01\x09\x04\x0E\xE0BIch habe gehört, dass sich hier am Berg allerlei\nlichtscheues Gesindel herumtreibt...\n\n\nUnd meine Erfahrung sagt mir, dass es an\nsolchen Orten ganz sicher was zu holen gibt!\nHehehe...")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x0E\xE09Nun... Du solltest dich vielleicht erst einmal\num das Nötigste kümmern...\n\n\nIst dir etwa nicht aufgefallen, dass du\nvöllig unbewaffnet bist?!?\n\n\n\x0E\x01\x09\x04\x0F\xF0AAls du bewusstlos warst, hat man dir deine\nAusrüstung abgenommen. Die solltest du\nvielleicht suchen gehen...\n\n\x0E\x01\x09\x04\x0E\xE00Das hier habe ich mir immerhin\nschnappen können...")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf("\x0E\x01\x09\x04\x11\x110BIch mache mich jetzt schon mal auf.\nHab's schließlich eilig...\n\n\n\x0E\x01\x09\x04\x0F\xE00Bis dann!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0B...\nDann hast du wohl auch von den\nGerüchten gehört, was?\n\x0E\x01\x09\x04\x0E\xE00Hehehe!\nHier soll sich allerlei lichtscheues\nGesindel versammelt haben.\n\x0E\x01\x09\x04\x0F\xE00Und wo die sind, gibt es ganz\nbestimmt was zu holen! Hehehe!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\nIch kann es nicht oft genug sagen...\nDu solltest wirklich deine Ausrüstung\nwiederfinden!\n\n\x0E\x01\x09\x04\x0F\xE00Du willst dich schließlich nicht\nunglücklich machen, oder?\nHast du mich verstanden?\n[1]Klar![2]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf("...\n\n\n\n\x0E\x01\x09\x04\x0F\xE06Hm...\nIrgendwie mache ich mir Sorgen um dich...\n\n\n\x0E\x01\x09\x04\x0E\xE00Also gut! Ich zeige dir was!\nÖffne mal deine Karte!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x11\x110BBist du bereit?\nIch tue dir jetzt einen Riesengefallen und\nverrate dir, was sich in den Truhen befindet.")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x0E\xE09Leider war da nichts drin,\nwas mich interessieren würde...\n\n\n\x0E\x01\x09\x04\x0F\xE00Aber es könnten einige deiner Sachen\ndabei sein.")
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0BIch mache mich dann mal wieder\nauf die Schatzsuche...\n\n\nBis dann!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hey!")
/*< 18>*/ 		printf("\x0E\x01\x09\x04\x0F\xE00Was machst du denn da?!?\nDu kannst doch nicht vollkommen\nunbewaffnet hier herumstolzieren!\n\nIch habe dir doch gesagt, dass sich hier\nallerlei Gesindel versammelt hat...\n\n\n\x0E\x01\x09\x04\x0E\xE03Schau dich nur um!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf("Uff...\n\n\n\nDie ganzen Ungeheuer sind plötzlich\nvon hier verschwunden! Irgendwas\nmuss da passiert sein...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf("Uff...\nIst das heiß!\n\n\nAber die Schätze dieser Welt liegen vor mir!")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("Vielen Dank, \x0E\x01\x12\x04\x00\x04Gebieter.\n\n\n\nBitte entschuldige, dass ich eben nicht bei\ndir sein konnte, \x0E\x01\x12\x04\x00\x02Gebieter.\n\n\nIch habe dort hinten rechts eine starke\nPräsenz gespürt.\n\n\nEs besteht eine Wahrscheinlichkeit von 60 %,\ndass es sich dabei um den Drachen handelt,\nder eine <b<Stimme des Heldenlieds>> hütet.\n\nIch empfehle, deine restliche Ausrüstung\neinzusammeln und dich dann auf die Suche\nnach dem Drachen zu begeben.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf("Hallöchen! Neue Visionen gefällig?\nNa, was meinst du?\n[1]Gerne![2-]Nein,\ndanke.")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf("Ach so? Na, auf jeden Fall wünsche\nich dir das Beste!")
          		}
          	  case 1:
/*< 65>*/ 		printf("Wenn du willst, kann ich dir hier\nganz besondere Visionen zeigen.\nNa, was meinst du?\n[1]Gerne![2-]Nein,\ndanke.")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("Wenn du willst, kann ich dir hier\nganz besondere Visionen zeigen.\nNa, was meinst du?\n[1]Gerne![2-]Nein,\ndanke.")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf("Ach so? Na, auf jeden Fall wünsche\nich dir das Beste!")
          			}
          		  case 1:
/*< 80>*/ 			printf("Na, wie geht's denn so?<pause0A> Neue Visionen\nhabe ich keine für dich, aber du kannst\ndir die alten Visionen ansehen. Na, was\nmeinst du?\n[1]Gerne![2-]Nein,\ndanke.")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf("Wenn du willst, kann ich dir hier\nganz besondere Visionen zeigen.\nNa, was meinst du?\n[1]Gerne![2-]Nein,\ndanke.")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

