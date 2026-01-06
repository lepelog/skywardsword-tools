          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "Deine Freundin wartet bestimmt auf\ndich, also darfst du nicht aufgeben!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10009:0x00000001>Hallo! Lange nicht gesehen!\nDu hast mir wirklich sehr geholfen!\n\n\nUnd, hast du deine Freundin gefunden?\n[1-]Ja![2-]Noch nicht...")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00110808>Du hast sie gefunden?\nIst doch prima...<pause 20>\nWas? Aber sie ist noch in Gefahr?\n\n<0x10009:0x000908ff>Jetzt mach dir keine Sorgen. Du darfst\nnur nicht aufgeben! Das wird schon!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x0013100d>Oh nein... Diese roten Kerle haben sie\ndoch nicht etwa...<pause 20>\n\n\n<0x10009:0x0011080e>Oh? Du weißt, dass sie lebt? Schau\nnicht so traurig, das ist doch schon\nmal was!\n\n<0x10009:0x00090800>Es ist erst vorbei, wenn du aufgibst!")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	make_actor_do_something(3, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 327, 'param3': 17}
/*<327>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00110800>Nicht weglaufen!\nVerjag sie!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00110812>Sieht aus, als hätten die roten Kerle\ndich gesehen. Die scheinen mir auf\neinen Kampf aus.\n\n<0x10009:0x00150d00>Sei so gut und vertreib sie von hier, ja?")
/*<330>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 57, 'param3': 32}
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 338, 'param3': 16}
/*<338>*/ 	make_actor_do_something(4, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 	set_camera(2, 0)
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 340, 'param3': 13}
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Sie sind hier!\nIrgendwie haben sie es durch die Lava\ngeschafft!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "Aaaah!\nSie sind hier! Sie sind hier!\n\n\nOh, du bist ja gar kein roter Kerl...\n<pause 15><0x10009:0x10090807>Musst du dich so anschleichen?\n\n\n<0x10009:0x100aff00>Tschuldigung!\nAber in letzter Zeit treiben sich in\nunserem Revier ganz schön viele\nMonster herum.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Ich bin durch das Loch da hinten\nhierher gekommen, aber der Weg dahin\nist jetzt durch die Lava versperrt.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 58 */ "Aber so was ist kein Problem für uns,\nwir graben uns einfach darunter durch.\n<0x10009:0x1011080b>Clever, was?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Über das Loch da könnte man die Lava\nauch abfließen lassen, aber das ist mir\nzu gefährlich!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00150d0c>Hm...<pause 20>\nIch frage mich, was die roten Kerle\neigentlich so essen...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "Manchmal kommen auch diese <color red<roten\nGlibber-Biester>coloroff> raus, also pass beim\nGraben auf!")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "Hast du mich erschreckt...<pause 20>\n<0x10009:0x00110d00>Was gräbst du da direkt über mir?!?\n\n\n<0x10009:0x00150809>Hehe, schon in Ordnung. Man weiß nie,\nwas man beim Graben findet, das\nmacht es so spannend.\n\n<0x10009:0x00ffffff>Natürlich findet man <color red<Rubine>coloroff>, aber\nauch <color red<hartes Metall>coloroff>...\n\n\n<0x10009:0x00150d11><color red<Herzen>coloroff> dagegen sind in letzter Zeit\nziemlich selten... Keine Ahnung,\nwarum das so ist. Versteh einer die\nNatur.\n<0x10009:0x00ffffff>Wann immer du ein Loch siehst,\nsolltest du drauflosgraben!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "Hast du mich erschreckt...<pause 20>\n<0x10009:0x00110d00>Was gräbst du da direkt über mir?!?\n\n\n<0x10009:0x00150809>Hehe, schon in Ordnung. Man weiß nie,\nwas man beim Graben findet, das\nmacht es so spannend.\n\n<0x10009:0x00ffffff>Natürlich findet man <color red<Rubine>coloroff>, aber\nauch <color red<hartes Metall>coloroff> oder <color red<Herzen>coloroff>...\n\n\nWann immer du ein Loch siehst,\nsolltest du drauflosgraben!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x000908ff>Solche Wände kannst du nicht nur\nunter der Erde finden. Ich bin sicher,\ndu findest sie.")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00150d10>Ach, da...\nGute Arbeit!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "Es gibt hier dünne Wände, die du\nzerstören kannst. Dahinter verbergen\nsich oft Schätze.")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000001>Na, wie geht's?\nBist du hier, um Schätze zu suchen?\n\n\n<0x10009:0x00110800>Vielleicht weißt du's ja schon, aber am\n<color blue<Vulkan Eldin>coloroff> gibt es dünne Wände...\n\n\n<0x10009:0x000908ff>Wenn du sie irgendwie zerstörst,\nfindest du Höhlen.\n\n\nSo habe ich schon so manchen Schatz\ngefunden, meistens <color yellow<Rubine>coloroff>.\n<0x10009:0x001108ff>Sieh dich doch mal um!")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x0015080c>Hier in der Nähe muss auch so eine\nStelle sein, das sagt mir mein\nSchatzsucher-Instinkt.")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>Na, wie geht's dir?\n\n\n\n<0x10009:0x001108ff>Bist du hier, um Schätze zu suchen?\nDann hätte ich da eine nützliche\nInformation...\n\n<0x10009:0x0009080b>Am <color blue<Vulkan Eldin>coloroff> gibt es dünne Wände,\nhinter denen sich Höhlen verbergen.\n\n\nWenn du diese Wände zerstörst, findest\ndu alle möglichen Schätze, meistens\n<color yellow<Rubine>coloroff>.\n\n<0x10009:0x0015080c>Hier in der Nähe muss auch so eine\nStelle sein, das sagt mir mein\nSchatzsucher-Instinkt.")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0015080b>Ruinen in den Tiefen eines Vulkans...\nHehehe, genau das Richtige für\n<color blue<Schatzsucher>coloroff>...")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00110801>Na, nutzt du meine <color yellow<Bombentasche>coloroff> auch\nfleißig?\n\n\n<0x10009:0x000909ff>Warst du eigentlich mal im Zentrum\ndes <color blue<Vulkans Eldin>coloroff>?\n\n\n<0x10009:0x00150816>Da ist es so unglaublich heiß, dass\ndeine Klamotten in Flammen aufgehen.\nKeiner kommt da durch!\n\n<0x10009:0x000909ff>Jedenfalls soll es da tolle Ruinen voller\nSchätze geben.\nHeißt es zumindest.\n\n<0x10009:0x0011080b>Wir graben uns wie immer durch die\nErde, also sollte es für uns kein\nProblem sein.")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1000, 'next': 81, 'param3': 24}
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 147, 'param3': 32}
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 277, 'param3': 32}
/*<277>*/ 	make_actor_do_something(1, 16)
/*< 82>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 250, 'param3': 16}
/*<250>*/ 	set_camera(20, 0)
/*<258>*/ 	wait_frames(45)
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "Sie müssen es hier vergraben haben...\nAber ich finde nix.")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Bist du sicher, dass es hier war, <color blue<Ferri>coloroff>?\nUnd was suchen wir eigentlich?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "Den <color red<Schlüssel>coloroff>! Den <color red<Schlüssel>coloroff>!!!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	wait_frames(15)
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "Sie haben den <color red<Schlüssel zu diesem Tor\n>coloroff>zerbrochen und die Einzelteile\nversteckt.\n\nUnd eines von diesen <color red<5 Teilen>coloroff> muss hier\nsein.")
/*<260>*/ 	wait_frames(30)
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "Hm... Hast du diesen seltsam\naussehenden Menschen mit den\n<color red<blonden Haaren>coloroff><sound 4> gesehen, der\nhier hineingebracht wurde?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x10110d0b>Ja! Bestimmt haben sie da etwas\nWichtiges versteckt!\n\n\n<0x10009:0x10090800>Und der Mensch war bestimmt Teil\neines unglaublichen Plans!\nIch wittere Schätze!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "Aber was machen wir mit den ganzen\nEinzelteilen des Schlüssels?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x10110d09>Wir öffnen damit das Tor und reißen\nuns drinnen sämtliche Schätze unter\nden Nagel!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Aber... <pause 15>Können wir uns nicht einfach\nhineingraben?")
/*<262>*/ 	wait_frames(15)
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "...<pause 30>")
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "...<pause 30>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	wait_frames(30)
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "Du bist ganz schön schlau.")
/*<257>*/ 	wait_frames(45)
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	wait_frames(45)
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Dieser Ort ist der <color blue<Vulkan\nEldin>coloroff>, ein noch sehr aktiver Vulkan.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 2, unk: 1, line: 5 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Ich konnte aus dem\nGespräch mit den <color blue<Mogma>coloroff> eine wichtige\nInformation herausfiltern.\nDie eben erwähnte <color red<seltsame Gestalt>coloroff>,\ndie weggebracht wurde, war...\n[1-]Zelda![2-]In schwarz?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0, line: 6 */ "Sehr wohl, <0x10012:0x00000005>Gebieter.\nDie Wahrscheinlichkeit, dass es sich um\nZelda handelt, beträgt 90 %.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 8 */ "Die Wahrscheinlichkeit, dass die\nFragmente des Schlüssels zu diesem\nTor aus demselben Material bestehen\nwie das Tor selbst, beträgt 95 %.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 1, line: 9 */ "Ich spüre, dass sich hier in der Nähe\nFragmente aus diesem Material\nbefinden.\n\nDiese Fragmente sind für die Suche\nnach <color red<Zelda>coloroff> unabdingbar, daher habe\nich sie als Ziel für die <color red<Aurasuche\n>coloroff>festgelegt.<sound 4>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 2, unk: 0, line: 7 */ "Die Wahrscheinlichkeit, dass es sich\num die schwarz gekleidete Frau\nhandelt, liegt bei <0x10008:0x01cd>10 %.\n\nMeiner Schätzung zufolge war\nes <color red<Zelda>coloroff>, die weggebracht wurde.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10005:0x005a0000>Dieses Gebiet besteht zu 65 % aus Lava\nund ist voller Kreaturen, die sich an\ndas Feuer gewöhnt haben.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "Also, pass gut auf! Bei <color green rupee<grünen Rubinen\n>coloroff>liegen <color red<keine Bomben>coloroff>.\n\n\nBei <color blue rupee<blauen Rubinen>coloroff> liegen <color red<1-2 Bomben>coloroff>,\nbei <color red rupee<roten Rubinen >coloroff>sind es <color red<3-4 Bomben>coloroff>.\n\n\nBei <color silver<silbernen Rubinen>coloroff> musst du mit\n<color red<5-6 Bomben>coloroff> rechnen, bei <color gold<goldenen\nRubinen>coloroff> mit <color red<7-8 Bomben>coloroff>.\n\nLetzten Endes gehört neben diesem\nWissen auch noch etwas Glück dazu.\n<0x10009:0x00150509>Alles Gute, hehe!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 1, line: 72 */ "Aha, willst du meinen Tipp jetzt doch?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x00ffff00>Das Geheimnis der <color red<Risiko-Rubinjagd>coloroff>!\nFür nur <color red<20 Rubine>coloroff>!\n[1-]Verrat's mir![2]Lieber nicht.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 66 */ "Hehe, da danke ich recht schön!\nAber sag es niemandem weiter!")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x0011ff00>Also, je nachdem, wie kostbar ein\nRubin ist, wird er von einer\nunterschiedlichen Anzahl Bomben\ngesichert.\n<0x10009:0x00ffff0b>Ein <color green rupee<grüner Rubin>coloroff> zum Beispiel hat in\nder Nähe <color red<keine Bomben>coloroff>!\n\n\nEin <color blue rupee<blauer Rubin>coloroff> hat <color red<1-2 Bomben>coloroff>,\nein <color red rupee<roter Rubin>coloroff> hat <color red<3-4 Bomben >coloroff>und ein\n<color silver<silberner>coloroff> Rubin hat <color red<5-6 Bomben>coloroff> in\nseiner Umgebung.\nEin <color gold<goldener Rubin >coloroff>ist sehr, sehr selten\nund von <color red<7-8 Bomben >coloroff>umgeben.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "Und, was sagst du? Das macht es doch\nerheblich einfacher zu entscheiden, wo\ndu graben solltest, was?\n\n<0x10009:0x00ffff09>Aber etwas Glück brauchst du trotzdem\nnoch! Alles Gute!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "Du hast nicht genug Rubine.\n\n\n\n<0x10009:0x00141209>Komm wieder, wenn du <color red<20 Rubine>coloroff> hast,\ndann gibt's den Tipp.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Was soll der Geiz? Ich meine, das ist\nein Spitzentipp!\n\n\n<0x10009:0x00ffff00>Na gut, wenn du's dir anders überlegst,\nich bin hier. Und <color red<20 Rubine >coloroff>sind nicht\nzu viel für meinen Tipp.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1, line: 64 */ "Du willst <color blue<Cippolinos >coloroff><color red<Risiko-Rubinjagd\n>coloroff>spielen, oder?\n\n\n<0x10009:0x0015080b>Willst du einen <color red<Tipp>coloroff>, mit dem du ganz\neinfach reich wirst?\n\n\n<0x10009:0x00ffff00>Allerdings<pause 10>.<pause 10>.<pause 10>.<pause 10>\nAllerdings gibt es den nicht umsonst,\nschließlich wirst du ja reich damit...")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf(/* textboxtype: 1, unk: 1, line: 65 */ "<0x10009:0x001108ff>Ich mache dir einen Preis, der mich\nfast zum Weinen bringt!\nSchlappe <color red<20 Rubine>coloroff>!\n[1-]Verrat's mir![2]Lieber nicht.")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<205>*/ 	check_item_flag(505, 5)
/*<204>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Die Luft im vor uns\nliegenden Abschnitt ist\n<color red<extrem heiß>coloroff>.\nIn deinem <0x10012:0x00000002>momentanen Zustand\nstellt dies eine Gefahr für dich dar.\nIch schlage vor, umzukehren.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nIn deinem <0x10012:0x00000002>momentanen Zustand stellt\ndiese <color red<extreme Hitze>coloroff> eine große Gefahr\nfür dich dar.\n\nAußerdem zeigt die <color red<Aurasuche>coloroff> in\ndieser Richtung nichts an, bitte\nüberprüfe, ob das wirklich die\nrichtige Richtung ist.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10005:0x005a0000>Ich empfehle, auf <color red<Gegenstände aus\nHolz>coloroff> sowie <color red<deine Kleidung>coloroff> besonders\nachtzugeben.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "Die Kleidung war schwarz, mehr weiß\nich nicht.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "Oh? Noch ein Fremder, der nicht zu\nden roten Kerlen gehört...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Erst vorhin ist ein <color red<seltsam gekleideter\nMensch>coloroff> in das Loch da geklettert!<sound 4>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 2, line: 76 */ "Du glaubst, das könnte deine Freundin\ngewesen sein? Lass mich nachdenken...\nWie sah dieser Mensch noch gleich aus?")
/*<349>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0014120c>Hmmm...<pause 30>\nAlso, er war <color red<schwarz gekleidet>coloroff>, aber\nmehr kann ich dir auch nicht sagen.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "<0x10005:0x004b0000>Falls du in Brand gerätst, würde <color green<eine\nRolle oder eine Wirbelattacke>coloroff> das\nFeuer vermutlich löschen.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Die Gestalt, die vorhin hier vorbeikam,\nsah dir ein bisschen ähnlich, so vom\nKörperbau her.\n\nAber die Klamotten waren anders,\nnicht grün wie deine.")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00110d11>Du suchst keine Schätze, sondern\ndeine Freundin?\n\n\n<0x10009:0x00ffff0e>Wie sieht sie denn aus?\n<color red<Da ist nämlich vorhin jemand\nvorbeigerannt>coloroff>, ohne uns eines Blickes\nzu würdigen.<sound 4>\nAber ich habe nur gesehen, dass es\nkeiner von den roten Kerlen war.\n\n\nWer immer es war, er ist bestimmt da\nweiter vorn, also versuch doch einfach,\nihn einzuholen.")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Durch die Stärkung des\nSchwertes kannst du nun auch <color yellow<Rubine\n>coloroff>per <color red<Aurasuche>coloroff> aufspüren.\nIch habe <color yellow<Rubine>coloroff> als mögliches Ziel zur\n<color red<Aurasuche>coloroff> hinzugefügt.<sound 4>\nDie Suche ist nun verfügbar.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "Hier gibt es viele dieser roten, blauen\nund grünen Steine, die man <color yellow<Rubine\n>coloroff>nennt. Es gibt sogar <color red<silberne>coloroff> und\n<color red<goldene>coloroff>!\nUnd ein hartes <color red<Metall für\nAusrüstungsgegenstände>coloroff>, aber\ndas ist nicht unbedingt ein Schatz nach\nmeinem Geschmack...")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "Wir <color blue<Mogma>coloroff> haben diese Gegend zu\nunserem Revier gemacht und suchen\nhier Schätze. Wir sind <color blue<Schatzsucher>coloroff>.\n\nHier gibt es viele dieser roten, blauen\nund grünen Steine, die man <color yellow<Rubine\n>coloroff>nennt. Es gibt sogar <color red<silberne>coloroff> und\n<color red<goldene>coloroff>!\nUnd ein hartes <color red<Metall für\nAusrüstungsgegenstände>coloroff>, aber das ist\nnicht unbedingt ein Schatz nach\nmeinem Geschmack...\nDu bist sicher auch wegen der Schätze\nhier, was?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00110d11>Du suchst keine Schätze, sondern\ndeine Freundin?\n\n\n<0x10009:0x00ffff0e>Wie sieht sie denn aus?\n<color red<Da ist nämlich vorhin jemand\nvorbeigerannt>coloroff>, ohne uns eines Blickes\nzu würdigen.<sound 4>\nAber ich habe nur gesehen, dass es\nkeiner von den roten Kerlen war.\n\n\nWer immer es war, er ist bestimmt da\nweiter vorn, also versuch doch einfach,\nihn einzuholen.")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 1, unk: 0, line: 107 */ "Wo suche ich als Nächstes nach\nSchätzen? Ich darf nur nicht wieder\nvergessen, dass ich mich überallhin\ndurchgraben kann!")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "Warst du in den Ruinen?\n\n\n\n<0x10009:0x0013100d>Ich habe gekniffen und bin\nnach Hause... Mein Kumpel war\nvielleicht sauer.\n\n<0x10009:0x000908ff>„Wir graben uns an jeden Ort!“, hat er\ngeschrien...<pause 15>\nDas hatte ich ganz vergessen.")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 1, unk: 0, line: 109 */ "Wo suche ich als Nächstes nach\nSchätzen? Wir <color blue<Schatzsucher >coloroff>ruhen\nniemals!")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00110801>Na, nutzt du meine <color yellow<Bombentasche >coloroff>auch\nfleißig?\n\n\n<0x10009:0x000908ff>Wenn ich sie dir schon schenke, solltest\ndu sie auch kräftig einsetzen!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Noch einer! Aber diesmal grün!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "Gerade eben war hier jemand, der so\nähnlich aussah wie du, nur mit\n<color red<schwarzen Klamotten>coloroff>. War das ein\nKumpel von dir?<sound 4>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Hier geht's nicht weiter, aber das hat\nihn nicht mal gebremst... Er ist einfach\nhinübergesprungen!")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "Was für eine Kraft...<pause 15>\nRespekt!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "Es wimmelt hier nur so von diesen\nroten Kerlen...\n\n\nDer Typ von vorhin wäre an denen\nbestimmt locker vorbeigekommen.\n\n\nWenn der uns bei der Schatzsuche\nhelfen würde...\n<0x10009:0x001502ff>Du hast da 'nen tollen Kumpel.")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x0000000b>Gebieter, du befindest dich derzeit auf\nder Suche nach <color red<Zelda>coloroff>...\n\n\nErinnerst du dich, wie du mit der\n<color red<Aurasuche>coloroff> nach Zelda Ausschau\nhalten kannst?\n[1-]Natürlich![2-]Vergessen...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "Dann entschuldige die Störung,\n<0x10012:0x00000005>Gebieter. Setzen wir die Suche nach\nZelda fort.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10012:0x00000005>Gebieter, halte für die <color red<Aurasuche\n>coloroff>(C) gedrückt.<0x10011:0x06cd>\n\n\n<0x10012:0x00000001>Wähle aus, was du suchen möchtest,\nindem du mit der Wii-Fernbedienung\ndarauf zeigst. Die Schwertspitze\nreagiert dann auf das gewählte Ziel.\nJe näher sich das Ziel befindet, desto\n<color red<stärker die Reaktion>coloroff>. Außerdem ändert\nsich der Signalton.\n\nZudem erscheint auf dem Zeiger ein\n<color red<Pfeil>coloroff>, der die ungefähre Richtung, in\nder sich das Ziel befindet, angibt.\n\nBitte wähle Zelda aus, damit wir unsere\nSuche fortsetzen können.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0, line: 115 */ "Zelda ist nah...<pause 20> Beeil dich!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "Unglaublich, die machen hier, was sie\nwollen! In unserem Revier!!!")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Aaaah! Erschreck mich doch nicht so!\n\n\n\nAch, du suchst eine Freundin von dir?<0x10009:0x001412ff>\nDa kann ich dir nicht helfen.\n\n\n<0x10009:0x00ffffff>Hier ist nämlich niemand\nvorbeigekommen...<0x1000A:0x000900cd> Vielleicht ist deine\nFreundin ja da oben entlang gegangen?")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Hmpf...<pause 20>\nKann nicht irgendwer diese roten\nKerle vertreiben?")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (zone_temp_flags[19 /* 0x3 08 */]) {
          	  case 0:
/*<337>*/ 		set_camera(26, 0)
          		flw_314:
/*<314>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 346, 'param3': 40}
/*<346>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 313, 'param3': 13}
/*<313>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 320, 'param3': 14}
/*<320>*/ 		make_actor_do_something(3, 0)
/*<263>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 150, 'param3': 17}
/*<150>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2056, 'next': 5, 'param3': 13}
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "Du bist ja ganz schön stark!\nDanke für deine Hilfe!\n\n\n<0x10009:0x00ffff0b>Wir <color blue<Mogma >coloroff>lassen uns nicht lumpen,\nwenn uns jemand hilft.\n\n\nWie kann ich dir für deine Hilfe\ndanken?\n[1-]Hilf mir.[2-]Rubine!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Du warst auf der Suche nach deiner\nFreundin, oder?\n\n\n<0x10009:0x00090809>Dann wirst du das hier sicher\ngebrauchen können!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "Damit kommst du hier nach oben.<0x1000A:0x000b00cd>\nProbier's mal an dem Loch da aus.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "Ich hoffe, deine Freundin ist nicht\nden roten Kerlen in die Hände\ngefallen...")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Rubine? Rubine?!?\nDas ist es, was du willst?\n\n\n<0x10009:0x00151204><0x10008:0xffcd>Das wird meinem Dank nicht gerecht...<pause 20>\nIch hab da was Anderes...\n\n\n<0x10009:0x001412ff>Moment...<pause 15>\nIch hab's doch hier irgendwo...\n\n\n<0x10009:0x00110809>Warst du nicht auf der Suche nach\ndeiner Freundin?\nDas hier wird dir sicher mehr nützen\nals Rubine.")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "Damit kommst du hier nach oben.<0x1000A:0x000b00cd>\nProbier's mal an dem Loch da aus.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10008:0xffcd>Ich brauche sie sowieso nicht...\nHab selbst gute Klauen!\nDir aber werden sie nützlich sein.\nViel nützlicher als Rubine!")
/*<161>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 137, 'param3': 13}
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		set_camera(25, 0)
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 322, 'param3': 32}
/*<322>*/ 	make_actor_do_something(3, 16)
/*<352>*/ 	make_actor_do_something(4, 16)
/*<143>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 272, 'next': 142, 'param3': 15}
/*<142>*/ 	set_camera(14, 0)
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 1799, 'next': 141, 'param3': 13}
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Ich traue meinen Augen nicht... <pause 15>\nAlle besiegt...<pause 15>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "Ich drücke die Daumen, dass es deiner\nFreundin gut geht.")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Was machst du, wenn der mit der\n<color red<blauen Mütze>coloroff> ins Jagdhorn stößt und\nVerstärkung anrückt?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x00110809>Du hast sie wütend gemacht, also\nkümmerst du dich jetzt gefälligst auch\num sie!\n\n<0x10009:0x00ffffff>Denk dran, wenn du ein paar von\nihnen besiegst, <color red<ruft der mit dem Horn\nVerstärkung>coloroff>.\n\nEs ist der mit der <color red<blauen Mütze>coloroff><sound 4>, er ist\nder Anführer.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0011080e>Was? Du willst sie wirklich verjagen?\n\n\n\n<0x10009:0x00151200>Sie wissen, dass du hier bist, also wirst\ndu wohl kämpfen müssen.\n\n\n<0x10009:0x00ffff00>Aber pass auf, es kommen immer\nwieder neue, solange du nicht etwas\ngegen den Kerl unternimmst, der<color red<\nmit seinem Horn Verstärkung ruft>coloroff>.\nDer mit der <color red<blauen Mütze>coloroff><sound 4> und dem\nJagdhorn scheint der Anführer zu sein.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Wie wär's, verjagst du diese Kerle?\n\n\n\n<0x10009:0x00141209>Wenn du stark genug bist, natürlich...\n")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "Du kannst <color yellow<Donnerblumen>coloroff> durch\nDrücken von (A) wie Krüge <color green<aufheben\nund hinlegen>coloroff>.\n\n<color green<Zeige mit der Wii-Fernbedienung nach\noben und bewege sie nach vorn>coloroff>, um sie\nzu <color green<werfen>coloroff>.\n\n<color green<Zeige mit der Wii-Fernbedienung\nnach unten und bewege sie nach vorn>coloroff>,\num sie zu <color green<rollen>coloroff>. Probier es mit den\n<color yellow<Donnerblumen>coloroff> hier mal aus!")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00150d11>Moment, du hast ja gar keine\nBombentasche!\n\n\n<0x10009:0x00110dff>Ohne <color yellow<Bombentasche>coloroff> kannst du keine\n<color yellow<Donnerblumen>coloroff> einstecken.\nVon uns <color blue<Mogma>coloroff> hat jeder eine.\n\n<0x10009:0x00ffffff>...<pause 20>Was?\nWarum siehst du mich so an?\n\n\n<0x10009:0x00141209>Nein, ich kann dir meine nicht geben.\nVöllig unmöglich. Mach hier ein paar\nFelsen kaputt und sei zufrieden damit.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00150d11>Hm, dich hab ich hier noch nie\ngesehen...\n\n\nIiieeek!<0x10009:0x00110d12> Gehörst du etwa zu diesen\nroten Kerlen?!?\n[1-]Nein![2-]Rote Kerle?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 1, line: 80 */ "<0x10009:0x00ffff07>Du siehst auch anders aus...<pause 15>\nJa, du siehst eindeutig anders aus.\n\n\n<0x10009:0x0015ff00>Was führt dich hierher?\nBist du wegen der <color yellow<Donnerblumen>coloroff> hier?\n[1-]Was ist das?[2-]Genau!")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff00>Das da sind <color yellow<Donnerblumen>coloroff>.\n<0x1000A:0x001100cd>Die wachsen hier in der Umgebung.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 1, unk: 1, line: 83 */ "Sie sind ziemlich gefährlich. Hebst\ndu sie durch Drücken von (A) auf,\nexplodieren sie nach kurzer Zeit.\n\n<0x10009:0x0011080b>Aber wenn man weiß, wie man sie\neinsetzen muss, sind sie toll.\nWir <color blue<Mogma>coloroff> nutzen sie auch gern.\n\n<0x10009:0x00ffffff>Du kannst sie wie Krüge <color green<werfen oder\nrollen>coloroff>. Also, schnapp dir doch mal eine\nder <color yellow<Donnerblumen >coloroff>hier und probier's\naus!\n<0x10006:0xffcd>...<pause 15><0x10006:0x00cd>\n<0x10009:0x00110d11>Kann es sein, dass du nicht weißt,\nwie man etwas <color green<wirft oder rollt>coloroff>?\n[1-]Doch![2-]Na ja...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00090809>Wirklich?\n<color green<Zeige mit der Wii-Fernbedienung nach\noben und bewege sie ruckartig nach\nvorn>coloroff>, um etwas zu <color green<werfen>coloroff>.\nUm etwas zu <color green<rollen>coloroff>, <color green<zeige mit der\nWii-Fernbedienung nach unten und\nbewege sie ruckartig nach vorn>coloroff>.\nIst ganz einfach!")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00141215>Wie, du weißt das nicht?<pause 15>\nNa, zum Glück bin ich ja da!\n\n\n<0x10009:0x000908ff>Nimm eine <color yellow<Donnerblume>coloroff> und <color green<richte\ndie Wii-Fernbedienung nach oben>coloroff>.\n\n\nEine Linie zeigt dir genau, wo die\n<color yellow<Donnerblume>coloroff> landet, wenn du die\n<color green<Wii-Fernbedienung ruckartig nach\nvorn bewegst>coloroff>.\nDu kannst aber auch eine <color yellow<Donnerblume>coloroff>\nnehmen und die <color green<Wii-Fernbedienung\nnach unten richten>coloroff>.\n\nDann zeigt dir die Linie, wo die\n<color yellow<Donnerblume>coloroff> hinrollt, wenn du die\n<color green<Wii-Fernbedienung ruckartig nach\nvorn bewegst>coloroff>.\n<0x10009:0x001108ff>Wirfst du sie, erreichst du auch\n<color red<höhere gelegene Stellen>coloroff>, rollst du sie,\nerreichst du <color red<weit entfernte und enge\nStellen>coloroff>. Das ist sehr praktisch!")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x0011020b>Hier in der Gegend findest du\nbesonders starke Exemplare.\n\n\n<0x10009:0x00ffffff><0x1000A:0x001100cd>Hier wachsen so viele, nimm dir\neinfach so viele du brauchst!\n")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 1, unk: 1, line: 85 */ "Wahrscheinlich weißt du's schon, aber\nwenn du sie durch Drücken von (A)\naufhebst, explodieren sie nach kurzer\nZeit.\nDu kannst sie wie Krüge <color green<werfen oder\nrollen>coloroff>, probier's aus.\n\n\n<0x10006:0xffcd>...<pause 15><0x10006:0x00cd>\n<0x10009:0x00110d11>Kann es sein, dass du nicht weißt, wie\nman etwas <color green<rollt>coloroff>?\n[1-]Doch![2-]Rollen?")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10009:0x00ffff00>Hast du diese Ungeheuer mit den\nriesigen Waffen nicht gesehen?\nDie treiben in letzter Zeit hier ihr\nUnwesen.\n<0x10009:0x0015ff07>Ich kann dir sagen, die sind nicht\nbesonders freundlich...\n\n\nUnd du, was führt dich hierher?\nBist du wegen der <color yellow<Donnerblumen>coloroff> hier?\n[1-]Was?[2-]Genau!")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "Halt, halt, halt!\nIch lasse nicht zu, dass du unser Revier\nhier verwüstest!")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Moment...<pause 15>\nHey, <color blue<Ferri>coloroff>, der sieht nicht so aus, als\nwürde er zu den roten Kerlen gehören,\noder?")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00010800>Ja ja, kann schon sein...\nAber muss er uns so erschrecken?!?\n\n\n<0x10009:0x00110d01>Nix für ungut!\nAber in letzter Zeit treiben sich in\nunserem Revier ganz schön viele\nungebetene Gäste herum.\n<0x10009:0x00150800>Deswegen liegen wir hier auch im\nHinterhalt, um es den Kerlen mal\nordentlich zu zeigen!")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10008:0xffcd>Pfff, gerade hast du noch vor Angst gezittert...")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Wenn du hier auch nach Schätzen\nsuchst, nimm dich auf jeden Fall vor\nden roten Kerlen in Acht...")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Die Luft im vor uns\nliegenden Abschnitt ist <color red<extrem heiß>coloroff>.\n\nDie Wahrscheinlichkeit, dass deine\nKleidung dort in Flammen aufgehen\nwird, beträgt 95 %.\n\nDu kannst dieses Gebiet schnell\ndurchqueren, in dem du <color green<sprintest>coloroff>.\nIch empfehle die <color red<Aurasuche>coloroff>, um\ndie richtige Richtung zu finden.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00000002>Auserwählter der Göttin...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 1, unk: 0, line: 92 */ "Bitte <color green<roll>coloroff> hier nicht herum, das wirbelt\nso viel Staub auf.")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0, line: 91 */ "Ah, da bist du ja wieder.\nBeachte mich gar nicht, fühl dich wie\ndaheim.\n\n<0x10009:0x10110d0e>Was? Ich soll hier nicht ständig\naus der Erde kommen?\nSag doch so was nicht!\n\n<0x10009:0x10150809>Ich mache mir nur Sorgen um mein\nHaus. Es mag klein und alt sein, aber es\nist meins!\n\n<0x10009:0x100909ff>Ruh dich ruhig aus, aber <color green<roll >coloroff>hier bitte\nnicht herum.")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Willkommen in meinem Haus!\nFühl dich wie daheim!\n\n\n<0x10009:0x1011080e>Ob das wirklich mein Haus ist?\n\n\n\n<0x10009:0x1015080a>Na ja, eigentlich haben es die roten\nKerle gebaut...<pause 20> \nAber die sind ja weg, also kein\nProblem, oder?\n<0x10009:0x100908ff>Wir <color blue<Mogma>coloroff> leben unter der Erde,\nHäuser gibt es bei uns keine.\n\n\n<0x10009:0x1015080d>Aber ich wollte schon immer mal\n„Willkommen in meinem Haus!“\nsagen...")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

