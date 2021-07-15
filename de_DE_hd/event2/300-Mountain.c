          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf("Deine Freundin wartet bestimmt auf dich,\nalso darfst du nicht aufgeben!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo! Lange nicht gesehen!\nDu hast mir wirklich sehr geholfen!\n\n\nUnd, hast du deine Freundin gefunden?\n[1]Ja![2]Noch nicht...")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf("\x0E\x01\x09\x04\x11\x808Du hast sie gefunden?\nIst doch prima...<pause14>\nWas? Aber sie ist noch in Gefahr?\n\n\x0E\x01\x09\x04\x09\x8FFJetzt mach dir keine Sorgen. Du darfst\nnur nicht aufgeben! Das wird schon!")
          		  case 1:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x13\x100DOh nein... Diese roten Kerle haben sie doch\nnicht etwa...<pause14>\n\n\n\x0E\x01\x09\x04\x11\x80EOh? Du weißt, dass sie lebt? Schau nicht\nso traurig, das ist doch schon mal was!\n\n\n\x0E\x01\x09\x04\x09\x800Es ist erst vorbei, wenn du aufgibst!")
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
/*<329>*/ 		printf("\x0E\x01\x09\x04\x11\x800Nicht weglaufen!\nVerjag sie!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf("\x0E\x01\x09\x04\x11\x812Sieht aus, als hätten die roten Kerle\ndich gesehen. Die scheinen mir auf\neinen Kampf aus.\n\n\x0E\x01\x09\x04\x15\xD00Sei so gut und vertreib sie von hier, ja?")
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
/*<340>*/ 		printf("Sie sind hier!\nIrgendwie haben sie es durch die Lava\ngeschafft!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf("Aaaah!\nSie sind hier! Sie sind hier!\n\n\nOh, du bist ja gar kein roter Kerl...\n<pause0F>\x0E\x01\x09\x04\x1009\x807Musst du dich so anschleichen?\n\n\n\x0E\x01\x09\x04\x100A\xFF00'tschuldigung!\nAber in letzter Zeit treiben sich in unserem\nRevier ganz schön viele Monster herum.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf("Ich bin durch das Loch da hinten\nhierhergekommen, aber der Weg dahin\nist jetzt durch die Lava versperrt.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf("Aber so was ist kein Problem für uns,\nwir graben uns einfach darunter durch.\n\x0E\x01\x09\x04\x1011\x80BClever, was?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf("Über das Loch da könnte man die Lava\nauch abfließen lassen, aber das ist mir\nzu gefährlich!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf("\x0E\x01\x09\x04\x15\xD0CHm...<pause14>\nIch frage mich, was die roten Kerle\neigentlich so essen...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Manchmal kommen auch diese <r<roten\nGlibber-Biester>> raus, also pass beim\nGraben auf!")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf("Hast du mich erschreckt...<pause14>\n\x0E\x01\x09\x04\x11\xD00Was gräbst du da direkt über mir?!?\n\n\n\x0E\x01\x09\x04\x15\x809Hehe, schon in Ordnung. Man weiß nie,\nwas man beim Graben findet, das\nmacht es so spannend.\n\n\x0E\x01\x09\x04ÿ\xFFFFNatürlich findet man <r<Rubine>>, aber\nauch <r<hartes Metall>>...\n\n\n\x0E\x01\x09\x04\x15\xD11<r<Herzen>> dagegen sind in letzter Zeit ziemlich\nselten... Keine Ahnung, warum das so ist.\nVersteh einer die Natur.\n\n\x0E\x01\x09\x04ÿ\xFFFFWann immer du ein Loch siehst, solltest du\ndrauflosgraben!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf("Hast du mich erschreckt...<pause14>\n\x0E\x01\x09\x04\x11\xD00Was gräbst du da direkt über mir?!?\n\n\n\x0E\x01\x09\x04\x15\x809Hehe, schon in Ordnung. Man weiß nie,\nwas man beim Graben findet, das\nmacht es so spannend.\n\n\x0E\x01\x09\x04ÿ\xFFFFNatürlich findet man <r<Rubine>>, aber\nauch <r<hartes Metall>> oder <r<Herzen>>...\n\n\nWann immer du ein Loch siehst,\nsolltest du drauflosgraben!")
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
/*<236>*/ 				printf("\x0E\x01\x09\x04\x09\x8FFSolche Wände kannst du nicht nur unter der\nErde finden. Ich bin sicher, du findest sie.")
          			  case 1:
/*<235>*/ 				printf("\x0E\x01\x09\x04\x15\xD10Ach, da...\nGute Arbeit!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf("Es gibt hier dünne Wände, die du zerstören\nkannst. Dahinter verbergen sich oft Schätze.")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x09\x04\x00\x01Na, wie geht's?\nBist du hier, um Schätze zu suchen?\n\n\n\x0E\x01\x09\x04\x11\x800Vielleicht weißt du's ja schon, aber am\n<b<Vulkan Eldin>> gibt es dünne Wände...\n\n\n\x0E\x01\x09\x04\x09\x8FFWenn du sie irgendwie zerstörst,\nfindest du Höhlen.\n\n\nSo habe ich schon so manchen Schatz\ngefunden, meistens <y<Rubine>>.\n\x0E\x01\x09\x04\x11\x8FFSieh dich doch mal um!")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x15\x80CHier in der Nähe muss auch so eine Stelle sein,\ndas sagt mir mein Schatzsucher-Instinkt.")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x01Na, wie geht's dir?\n\n\n\n\x0E\x01\x09\x04\x11\x8FFBist du hier, um Schätze zu suchen?\nDann hätte ich da eine nützliche Information...\n\n\n\x0E\x01\x09\x04\x09\x80BAm <b<Vulkan Eldin>> gibt es dünne Wände,\nhinter denen sich Höhlen verbergen.\n\n\nWenn du diese Wände zerstörst, findest\ndu alle möglichen Schätze, meistens <y<Rubine>>.\n\n\n\x0E\x01\x09\x04\x15\x80CHier in der Nähe muss auch so eine Stelle sein,\ndas sagt mir mein Schatzsucher-Instinkt.")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf("\x0E\x01\x09\x04\x15\x80BRuinen in den Tiefen eines Vulkans...\nHehehe, genau das Richtige für <b<Schatzsucher>>...")
          	  case 1:
/*<246>*/ 		printf("\x0E\x01\x09\x04\x11\x801Na, nutzt du meine <y<Bombentasche>> auch fleißig?\n\n\n\n\x0E\x01\x09\x04\x09\x9FFWarst du eigentlich mal im Zentrum des\n<b<Vulkans Eldin>>?\n\n\n\x0E\x01\x09\x04\x15\x816Da ist es so unglaublich heiß, dass deine\nKlamotten in Flammen aufgehen.\nKeiner kommt da durch!\n\n\x0E\x01\x09\x04\x09\x9FFJedenfalls soll es da tolle Ruinen voller\nSchätze geben.\nHeißt es zumindest.\n\n\x0E\x01\x09\x04\x11\x80BWir graben uns wie immer durch die Erde,\nalso sollte es für uns kein Problem sein.")
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
/*<258>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 298, 'param3': 6}
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf("Sie müssen es hier vergraben haben...\nAber ich finde nix.")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf("Bist du sicher, dass es hier war, <b<Ferri>>?\nUnd was suchen wir eigentlich?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf("Den <r<Schlüssel>>! Den <r<Schlüssel>>!!!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 149, 'param3': 6}
/*<149>*/ 	printf("Sie haben den <r<Schlüssel zu diesem Tor\n>>zerbrochen und die Einzelteile versteckt.\n\n\nUnd eines von diesen <r<5 Teilen>> muss hier sein.")
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 251, 'param3': 6}
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Hm... Hast du diesen seltsam aussehenden\nMenschen mit den <r<blonden Haaren>><pling> gesehen,\nder hier hineingebracht wurde?")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x1011\xD0BJa! Bestimmt haben sie da etwas\nWichtiges versteckt!\n\n\n\x0E\x01\x09\x04\x1009\x800Und der Mensch war bestimmt Teil\neines unglaublichen Plans!\nIch wittere Schätze!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Aber was machen wir mit den ganzen\nEinzelteilen des Schlüssels?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x1011\xD09Wir öffnen damit das Tor und reißen\nuns drinnen sämtliche Schätze unter\nden Nagel!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Aber... <pause0F>Können wir uns nicht einfach\nhineingraben?")
/*<262>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 254, 'param3': 6}
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf("...<pause1E>")
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 255, 'param3': 16}
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf("...<pause1E>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 34, 'param3': 6}
/*< 34>*/ 	printf("Du bist ganz schön schlau.")
/*<257>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 345, 'param3': 6}
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDieser Ort ist der <b<Vulkan Eldin>>, ein noch\nsehr aktiver Vulkan.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nIch konnte aus dem Gespräch mit den <b<Mogma\n>>eine wichtige Information herausfiltern.\n\nDie eben erwähnte <r<seltsame Gestalt>>,\ndie weggebracht wurde, war...\n[1]Zelda![2]In schwarz?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\nDie Wahrscheinlichkeit, dass es sich um\nZelda handelt, beträgt 90 %.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf("Die Wahrscheinlichkeit, dass die Fragmente des\nSchlüssels zu diesem Tor aus demselben Material\nbestehen wie das Tor selbst, beträgt 95 %.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf("Ich spüre, dass sich hier in der Nähe Fragmente\naus diesem Material befinden.\n\n\nDiese Fragmente sind für die Suche nach <r<Zelda\n>>unabdingbar, daher habe ich sie als Ziel für die\n<r<Aurasuche >>festgelegt.<pling>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf("Die Wahrscheinlichkeit, dass es sich um die schwarz\ngekleidete Frau handelt, liegt bei \x0E\x01\x08\x02\x1CD10 %.\n\n\nMeiner Schätzung zufolge war es <r<Zelda>>,\ndie weggebracht wurde.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf("\x0E\x01\x05\x04Z\x00Dieses Gebiet besteht zu 65 % aus Lava und ist voller\nKreaturen, die sich an das Feuer gewöhnt haben.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf("Also, pass gut auf! Bei <g+<grünen Rubinen\n>>liegen <r<keine Bomben>>.\n\n\nBei <b+<blauen Rubinen>> liegen <r<1-2 Bomben>>,\nbei <r+<roten Rubinen >>sind es <r<3-4 Bomben>>.\n\n\nBei <s<silbernen Rubinen>> musst du mit\n<r<5-6 Bomben>> rechnen, bei <y+<goldenen\nRubinen>> mit <r<7-8 Bomben>>.\n\nLetzten Endes gehört neben diesem\nWissen auch noch etwas Glück dazu.\n\x0E\x01\x09\x04\x15\x509Alles Gute, hehe!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf("Aha, willst du meinen Tipp jetzt doch?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF00Das Geheimnis der <r<Risiko-Rubinjagd>>!\nFür nur <r<20 Rubine>>!\n[1]Verrat's mir![2-]Lieber nicht.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf("Hehe, da danke ich recht schön!\nAber sag es niemandem weiter!")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf("\x0E\x01\x09\x04\x11\xFF00Also, je nachdem, wie kostbar ein Rubin ist,\nwird er von einer unterschiedlichen Anzahl\nBomben gesichert.\n\n\x0E\x01\x09\x04ÿ\xFF0BEin <g+<grüner Rubin>> zum Beispiel hat in\nder Nähe <r<keine Bomben>>!\n\n\nEin <b+<blauer Rubin>> hat <r<1-2 Bomben>>,\nein <r+<roter Rubin>> hat <r<3-4 Bomben >>und ein\n<s<silberner>> Rubin hat <r<5-6 Bomben>> in\nseiner Umgebung.\nEin <y+<goldener Rubin >>ist sehr, sehr selten\nund von <r<7-8 Bomben >>umgeben.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf("Und, was sagst du? Das macht es doch\nerheblich einfacher zu entscheiden, wo\ndu graben solltest, was?\n\n\x0E\x01\x09\x04ÿ\xFF09Aber etwas Glück brauchst du trotzdem noch!\nAlles Gute!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf("Du hast nicht genug Rubine.\n\n\n\n\x0E\x01\x09\x04\x14\x1209Komm wieder, wenn du <r<20 Rubine>> hast,\ndann gibt's den Tipp.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf("Was soll der Geiz? Ich meine, das ist\nein Spitzentipp!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Na gut, wenn du's dir anders überlegst,\nich bin hier. Und <r<20 Rubine >>sind nicht\nzu viel für meinen Tipp.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf("Du willst <b<Cippolinos >><r<Risiko-Rubinjagd\n>>spielen, oder?\n\n\n\x0E\x01\x09\x04\x15\x80BWillst du einen <r<Tipp>>, mit dem du ganz\neinfach reich wirst?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Allerdings<pause0A>.<pause0A>.<pause0A>.<pause0A>\nAllerdings gibt es den nicht umsonst,\nschließlich wirst du ja reich damit...")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf("\x0E\x01\x09\x04\x11\x8FFIch mache dir einen Preis, der mich\nfast zum Weinen bringt!\nSchlappe <r<20 Rubine>>!\n[1]Verrat's mir![2-]Lieber nicht.")
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
/*<207>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDie Luft im vor uns liegenden Abschnitt\nist <r<extrem heiß>>.\n\nIn deinem \x0E\x01\x12\x04\x00\x02momentanen Zustand stellt\ndies eine Gefahr für dich dar.\nIch schlage vor, umzukehren.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nIn deinem \x0E\x01\x12\x04\x00\x02momentanen Zustand stellt\ndiese <r<extreme Hitze>> eine große Gefahr\nfür dich dar.\n\nAußerdem zeigt die <r<Aurasuche>> in dieser\nRichtung nichts an, bitte überprüfe,\nob das wirklich die richtige Richtung ist.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf("\x0E\x01\x05\x04Z\x00Ich empfehle, auf <r<Gegenstände aus Holz>> sowie <r<deine\nKleidung>> besonders achtzugeben.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf("Die Kleidung war schwarz, mehr weiß ich nicht.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf("Oh? Noch ein Fremder, der nicht zu\nden roten Kerlen gehört...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf("Erst vorhin ist ein <r<seltsam gekleideter\nMensch>> in das Loch da geklettert!<pling>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf("Du glaubst, das könnte deine Freundin\ngewesen sein? Lass mich nachdenken...\nWie sah dieser Mensch noch gleich aus?")
/*<349>*/ 		printf("\x0E\x01\x09\x04\x14\x120CHmmm...<pause1E>\nAlso, er war <r<schwarz gekleidet>>, aber\nmehr kann ich dir auch nicht sagen.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x05\x04K\x00Falls du in Brand gerätst, würde <g<eine Rolle oder eine\nWirbelattacke>> das Feuer vermutlich löschen.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf("Die Gestalt, die vorhin hier vorbeikam,\nsah dir ein bisschen ähnlich, so vom\nKörperbau her.\n\nAber die Klamotten waren anders,\nnicht grün wie deine.")
          	  case 1:
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Du suchst keine Schätze, sondern\ndeine Freundin?\n\n\n\x0E\x01\x09\x04ÿ\xFF0EWie sieht sie denn aus?\n<r<Da ist nämlich vorhin jemand vorbeigerannt>>,\nohne uns eines Blickes zu würdigen.<pling>\n\nAber ich habe nur gesehen, dass es keiner von\nden roten Kerlen war.\n\n\nWer immer es war, er ist bestimmt da weiter\nvorn, also versuch doch einfach, ihn einzuholen.")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDurch die Stärkung des Schwertes kannst du\nnun auch <y<Rubine >>per <r<Aurasuche >>aufspüren.\n\nIch habe <y<Rubine>> als mögliches Ziel zur <r<Aurasuche\n>>hinzugefügt.<pling> Die Suche ist nun verfügbar.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf("Hier gibt es viele dieser roten, blauen und\ngrünen Steine, die man <y<Rubine >>nennt.\nEs gibt sogar <r<silberne>> und <r<goldene>>!\n\nUnd ein hartes <r<Metall für\nAusrüstungsgegenstände>>, aber das ist\nnicht unbedingt ein Schatz nach\nmeinem Geschmack...")
          		  case 1:
/*<101>*/ 			printf("Wir <b<Mogma>> haben diese Gegend zu unserem\nRevier gemacht und suchen hier Schätze.\nWir sind <b<Schatzsucher>>.\n\nHier gibt es viele dieser roten, blauen und\ngrünen Steine, die man <y<Rubine >>nennt.\nEs gibt sogar <r<silberne>> und <r<goldene>>!\n\nUnd ein hartes <r<Metall für\nAusrüstungsgegenstände>>, aber das ist\nnicht unbedingt ein Schatz nach\nmeinem Geschmack...\nDu bist sicher auch wegen der Schätze\nhier, was?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Du suchst keine Schätze, sondern\ndeine Freundin?\n\n\n\x0E\x01\x09\x04ÿ\xFF0EWie sieht sie denn aus?\n<r<Da ist nämlich vorhin jemand vorbeigerannt>>,\nohne uns eines Blickes zu würdigen.<pling>\n\nAber ich habe nur gesehen, dass es keiner von\nden roten Kerlen war.\n\n\nWer immer es war, er ist bestimmt da weiter\nvorn, also versuch doch einfach, ihn einzuholen.")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf("Wo suche ich als Nächstes nach Schätzen?\nIch darf nur nicht wieder vergessen, dass ich\nmich überallhin durchgraben kann!")
          		  case 1:
/*<287>*/ 			printf("Warst du in den Ruinen?\n\n\n\n\x0E\x01\x09\x04\x13\x100DIch habe gekniffen und bin nach Hause...\nMein Kumpel war vielleicht sauer.\n\n\n\x0E\x01\x09\x04\x09\x8FF\x201EWir graben uns an jeden Ort!\x201C,\nhat er geschrien...<pause0F>\nDas hatte ich ganz vergessen.")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf("Wo suche ich als Nächstes nach Schätzen?\nWir <b<Schatzsucher >>ruhen niemals!")
          		  case 1:
/*<292>*/ 			printf("\x0E\x01\x09\x04\x11\x801Na, nutzt du meine <y<Bombentasche >>auch fleißig?\n\n\n\n\x0E\x01\x09\x04\x09\x8FFWenn ich sie dir schon schenke, solltest du sie\nauch kräftig einsetzen!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("Noch einer! Aber diesmal grün!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf("Gerade eben war hier jemand, der so ähnlich\naussah wie du, nur mit <r<schwarzen Klamotten>>.\nWar das ein Kumpel von dir?<pling>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf("Hier geht's nicht weiter, aber das hat\nihn nicht mal gebremst... Er ist einfach\nhinübergesprungen!")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf("Was für eine Kraft...<pause0F>\nRespekt!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf("Es wimmelt hier nur so von diesen\nroten Kerlen...\n\n\nDer Typ von vorhin wäre an denen\nbestimmt locker vorbeigekommen.\n\n\nWenn der uns bei der Schatzsuche\nhelfen würde...\n\x0E\x01\x09\x04\x15\x2FFDu hast da 'nen tollen Kumpel.")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, du befindest dich derzeit auf der Suche\nnach <r<Zelda>>...\n\n\nErinnerst du dich, wie du mit der <r<Aurasuche>> nach\nZelda Ausschau halten kannst?\n[1]Natürlich![2]Vergessen...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf("Dann entschuldige die Störung, \x0E\x01\x12\x04\x00\x05Gebieter.\nSetzen wir die Suche nach Zelda fort.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf("\x0E\x01\x12\x04\x00\x05Gebieter, halte für die <r<Aurasuche\n(^)>> gedrückt.\x0E\x01\x11\x02\x8CD\n\n\n\x0E\x01\x12\x04\x00\x01Nachdem du ausgewählt hast was du suchen möchtest,\nreagiert deine Schwertspitze auf das gewählte Ziel.\n\n\nJe näher sich das Ziel befindet, desto <r<stärker\ndie Reaktion>>, die du sowohl hören als auch\nfühlen kannst!\n\nZudem erscheint auf dem Zeiger ein <r<Pfeil>>,\nder die ungefähre Richtung, in der sich das\nZiel befindet, angibt.\n\nBitte wähle Zelda als Ziel der Aurasuche aus,\ndamit wir unsere Suche fortsetzen können.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf("Zelda ist nah...<pause14> Beeil dich!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf("Unglaublich, die machen hier, was sie wollen!\nIn unserem Revier!!!")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Aaaah! Erschreck mich doch nicht so!\n\n\n\nAch, du suchst eine Freundin von dir?\x0E\x01\x09\x04\x14\x12FF\nDa kann ich dir nicht helfen.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFHier ist nämlich niemand vorbeigekommen...\x0E\x01\n\x04\x09Í\nVielleicht ist deine Freundin ja da oben\nentlanggegangen?")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("Hmpf...<pause14>\nKann nicht irgendwer diese roten\nKerle vertreiben?")
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
/*<  5>*/ 		printf("Du bist ja ganz schön stark!\nDanke für deine Hilfe!\n\n\n\x0E\x01\x09\x04ÿ\xFF0BWir <b<Mogma >>lassen uns nicht lumpen,\nwenn uns jemand hilft.\n\n\nWie kann ich dir für deine Hilfe danken?\n[1]Hilf mir.[2]Rubine!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf("Du warst auf der Suche nach deiner\nFreundin, oder?\n\n\n\x0E\x01\x09\x04\x09\x809Dann wirst du das hier sicher\ngebrauchen können!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf("Damit kommst du hier nach oben.\x0E\x01\n\x04\x0BÍ\nProbier's mal an dem Loch da aus.")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf("Ich hoffe, deine Freundin ist nicht den\nroten Kerlen in die Hände gefallen...")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf("Rubine? Rubine?!?\nDas ist es, was du willst?\n\n\n\x0E\x01\x09\x04\x15\x1204\x0E\x01\x08\x02\xFFCDDas wird meinem Dank nicht gerecht...<pause14>\nIch hab da was Anderes...\n\n\n\x0E\x01\x09\x04\x14\x12FFMoment...<pause0F>\nIch hab's doch hier irgendwo...\n\n\n\x0E\x01\x09\x04\x11\x809Warst du nicht auf der Suche nach\ndeiner Freundin?\nDas hier wird dir sicher mehr nützen\nals Rubine.")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf("Damit kommst du hier nach oben.\x0E\x01\n\x04\x0BÍ\nProbier's mal an dem Loch da aus.")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf("\x0E\x01\x08\x02\xFFCDIch brauche sie sowieso nicht...\nHab selbst gute Klauen!\nDir aber werden sie nützlich sein.\nViel nützlicher als Rubine!")
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
/*<141>*/ 	printf("Ich traue meinen Augen nicht... <pause0F>\nAlle besiegt...<pause0F>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf("Ich drücke die Daumen, dass es deiner\nFreundin gut geht.")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf("Was machst du, wenn der mit der\n<r<blauen Mütze>> ins Jagdhorn stößt und\nVerstärkung anrückt?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf("\x0E\x01\x09\x04\x11\x809Du hast sie wütend gemacht, also kümmerst\ndu dich jetzt gefälligst auch um sie!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFDenk dran, wenn du ein paar von ihnen\nbesiegst, <r<ruft der mit dem Horn Verstärkung>>.\n\n\nEs ist der mit der <r<blauen Mütze>><pling>, er ist\nder Anführer.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf("\x0E\x01\x09\x04\x11\x80EWas? Du willst sie wirklich verjagen?\n\n\n\n\x0E\x01\x09\x04\x15\x1200Sie wissen, dass du hier bist, also wirst\ndu wohl kämpfen müssen.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Aber pass auf, es kommen immer\nwieder neue, solange du nicht etwas\ngegen den Kerl unternimmst, der<r<\nmit seinem Horn Verstärkung ruft>>.\nDer mit der <r<blauen Mütze>><pling> und dem\nJagdhorn scheint der Anführer zu sein.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf("Wie wär's, verjagst du diese Kerle?\n\n\n\n\x0E\x01\x09\x04\x14\x1209Wenn du stark genug bist, natürlich...\n")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf("Du kannst <y<Donnerblumen>> durch Drücken\nvon (A) wie Krüge <g<aufheben und hinlegen>>.\n\n\nWas du einmal in der Hand hältst,\nkannst du entweder werfen oder rollen.\n\n\nSolltest du vergessen, wie genau das\nfunktioniert, dann heb einfach etwas\nauf und drücke dann \x0E\x02\x04\x02\x13CD, um dir die\n<r<Hilfe>> anzeigen zu lassen.\x0E\x01\x11\x02\xBCD\nAber jetzt übst du erst mal noch ein\nbisschen mit den <y<Donnerblumen>> da\ndrüben, ja?")
          		  case 1:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x15\xD11Moment, du hast ja gar keine Bombentasche!\n\n\n\n\x0E\x01\x09\x04\x11\xDFFOhne <y<Bombentasche>> kannst du keine\n<y<Donnerblumen>> einstecken.\nVon uns <b<Mogma>> hat jeder eine.\n\n\x0E\x01\x09\x04ÿ\xFFFF...<pause14>Was?\nWarum siehst du mich so an?\n\n\n\x0E\x01\x09\x04\x14\x1209Nein, ich kann dir meine nicht geben.\nVöllig unmöglich. Mach hier ein paar\nFelsen kaputt und sei zufrieden damit.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x15\xD11Hm, dich hab ich hier noch nie gesehen...\n\n\n\nIiieeek!\x0E\x01\x09\x04\x11\xD12 Gehörst du etwa zu diesen\nroten Kerlen?!?\n[1]Nein![2]Rote Kerle?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF07Du siehst auch anders aus...<pause0F>\nJa, du siehst eindeutig anders aus.\n\n\n\x0E\x01\x09\x04\x15\xFF00Was führt dich hierher?\nBist du wegen der <y<Donnerblumen>> hier?\n[1]Was ist das?[2]Genau!")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Das da sind <y<Donnerblumen>>.\n\x0E\x01\n\x04\x11ÍDie wachsen hier in der Umgebung.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf("Sie sind ziemlich gefährlich. Hebst du sie\ndurch Drücken von (A) auf, explodieren sie\nnach kurzer Zeit.\n\n\x0E\x01\x09\x04\x11\x80BAber wenn man weiß, wie man sie\neinsetzen muss, sind sie toll.\nWir <b<Mogma>> nutzen sie auch gern.\n\n\x0E\x01\x09\x04ÿ\xFFFFDu kannst sie wie Krüge <g<werfen oder\nrollen>>. Also, schnapp dir doch mal eine\nder <y<Donnerblumen >>hier und probier's aus!\n\n\x0E\x01\x06\x02\xFFCD...<pause0F>\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Kann es sein, dass du nicht weißt,\nwie man etwas <g<wirft oder rollt>>?\n[1]Doch![2]Na ja...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf("\x0E\x01\x09\x04\x09\x809Natürlich weißt du das!\nMan kann <g<Objekte hochheben>> und dann werfen\noder <g<nach unten halten>> und dann rollen...\nDas ist doch sonnenklar!")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Wie, du weißt das nicht?<pause0F>\nNa, zum Glück bin ich ja da!\n\n\n\x0E\x01\x09\x04\x09\x8FFWenn du eine <y<Donnerblume>> hast,\ndann <g<halte sie nach oben>>.\n\n\nEine Linie zeigt dir genau an, wo die\n<y<Donnerblume>> landen würde, also brauchst\ndu nur noch dein Ziel anzuvisieren und\nzu werfen!\nSo eine Linie erscheint aber auch, wenn\ndu die <y<Donnerblume >><g<nach unten hältst>>.\nDann kannst du sie deinem Gegner\nelegant entgegenrollen.\n\x0E\x01\x09\x04\x11\x8FFWirfst du sie, erreichst du auch\n<r<höhere gelegene Stellen>>, rollst du sie,\nerreichst du <r<weit entfernte und enge\nStellen>>. Das ist sehr praktisch!")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf("\x0E\x01\x09\x04\x11\x20BHier in der Gegend findest du\nbesonders starke Exemplare.\n\n\n\x0E\x01\x09\x04ÿ\xFFFF\x0E\x01\n\x04\x11ÍHier wachsen so viele, nimm dir\neinfach so viele, wie du brauchst!\n")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf("Wahrscheinlich weißt du's schon, aber wenn\ndu sie durch Drücken von (A) aufhebst,\nexplodieren sie nach kurzer Zeit.\n\nDu kannst sie wie Krüge <g<werfen oder rollen>>,\nprobier's aus.\n\n\n\x0E\x01\x06\x02\xFFCD...<pause0F>\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Kann es sein, dass du nicht weißt, wie man\netwas <g<rollt>>?\n[1]Doch![2]Rollen?")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF00Hast du diese Ungeheuer mit den riesigen\nWaffen nicht gesehen? Die treiben in letzter\nZeit hier ihr Unwesen.\n\n\x0E\x01\x09\x04\x15\xFF07Ich kann dir sagen, die sind nicht\nbesonders freundlich...\n\n\nUnd du, was führt dich hierher?\nBist du wegen der <y<Donnerblumen>> hier?\n[1]Was?[2]Genau!")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf("Halt, halt, halt!\nIch lasse nicht zu, dass du unser Revier\nhier verwüstest!")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf("Moment...<pause0F>\nHey, <b<Ferri>>, der sieht nicht so aus, als würde\ner zu den roten Kerlen gehören, oder?")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x01\x800Ja, ja, kann schon sein...\nAber muss er uns so erschrecken?!?\n\n\n\x0E\x01\x09\x04\x11\xD01Nix für ungut!\nAber in letzter Zeit treiben sich in\nunserem Revier ganz schön viele\nungebetene Gäste herum.\n\x0E\x01\x09\x04\x15\x800Deswegen liegen wir hier auch im\nHinterhalt, um es den Kerlen mal\nordentlich zu zeigen!")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf("\x0E\x01\x08\x02\xFFCDPfff, gerade hast du noch vor Angst gezittert...")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf("Wenn du hier auch nach Schätzen suchst,\nnimm dich auf jeden Fall vor den roten\nKerlen in Acht...")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDie Luft im vor uns liegenden Abschnitt\nist <r<extrem heiß>>.\n\nDie Wahrscheinlichkeit, dass deine Kleidung\ndort in Flammen aufgehen wird, beträgt 95 %.\n\n\nDu kannst dieses Gebiet schnell durchqueren,\nindem du <g<sprintest>>. Ich empfehle die <r<Aurasuche>>,\num die richtige Richtung zu finden.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x00\x02Auserwählter der Göttin...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf("Bitte <g<roll>> hier nicht herum, das wirbelt\nso viel Staub auf.")
          		  case 1:
/*<218>*/ 			printf("Ah, da bist du ja wieder.\nBeachte mich gar nicht, fühl dich wie daheim.\n\n\n\x0E\x01\x09\x04\x1011\xD0EWas? Ich soll hier nicht ständig aus der\nErde kommen? Sag doch so was nicht!\n\n\n\x0E\x01\x09\x04\x1015\x809Ich mache mir nur Sorgen um mein Haus.\nEs mag klein und alt sein, aber es ist meins!\n\n\n\x0E\x01\x09\x04\x1009\x9FFRuh dich ruhig aus, aber <g<roll >>hier bitte\nnicht herum.")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf("Willkommen in meinem Haus!\nFühl dich wie daheim!\n\n\n\x0E\x01\x09\x04\x1011\x80EOb das wirklich mein Haus ist?\n\n\n\n\x0E\x01\x09\x04\x1015\x80ANa ja, eigentlich haben es die roten\nKerle gebaut...<pause14>\nAber die sind ja weg, also kein\nProblem, oder?\n\x0E\x01\x09\x04\x1009\x8FFWir <b<Mogma>> leben unter der Erde,\nHäuser gibt es bei uns keine.\n\n\n\x0E\x01\x09\x04\x1015\x80DAber ich wollte schon immer mal\n\x201EWillkommen in meinem Haus!\x201C sagen...")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

