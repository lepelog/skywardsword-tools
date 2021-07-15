          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("Finde die<r< leuchtenden Steine>>.\nSchlage den Untersten zuerst,\nnur so öffnet sich das Tor.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf("Bitte sieh, \x0E\x01\x12\x04\x00\x01Gebieter.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf("Dieses Wappen auf dem Boden\nist das <r<Wappen von Farore>>.\n\n\nIch spüre die Macht des <y+<Triforce>>,\ndie davon ausgeht.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf("Ich schlage vor, durch diese Tür zu\ngehen, um das heilige Wappen zu\nerreichen.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf("Bitte sieh, \x0E\x01\x12\x04\x00\x01Gebieter.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf("Dieses Wappen auf dem Boden\nist das <r<Wappen von Nayru>>.\n\n\nIch spüre die Macht des <y+<Triforce>>,\ndie davon ausgeht.\n\n\nDer Weg dorthin scheint jedoch\nversperrt zu sein.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf("Lenke deinen Blick in diese Richtung.\nDort befindet sich eine <y<Kugel der Zeit>>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf("Nutze die <y<Kugel der Zeit>>, um den Weg\nzum <r<Wappen >>zu öffnen.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf("Bitte sieh, \x0E\x01\x12\x04\x00\x01Gebieter.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf("Dieses Wappen auf dem Boden\nist das <r<Wappen von Din>>.\n\n\nIch spüre die Macht des <y+<Triforce>>,\ndie davon ausgeht.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf("Es scheint jedoch nicht möglich,\ndas Wappen zu erreichen.\n\n\nIch schlage vor, einen anderen\nEingang zu diesem Raum zu suchen.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDies ist der Raum, in dem sich das\n<r<Wappen von Din>> befindet. Du warst\nbereits hier.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf("Die Wahrscheinlichkeit, dass du die\nheilige Kraft erreichen kannst, wenn\ndu die Lava überquerst, liegt bei 60 %.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf("Halte an deinem Willen fest\nund schreite voran, Gebieter.")
          	  case 1:
/*< 35>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIch spüre eine heilige Kraft\nin diesem Raum.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Du hast das Wappen\nerreicht.\n\nStoße dein Schwert in das Wappen,\nund du wirst zum <y+<Triforce >>geführt.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Du hast das Wappen\nerreicht.\n\nStoße dein Schwert in das Wappen,\nund du wirst zum <y+<Triforce >>geführt.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Du hast das Wappen\nerreicht.\n\nStoße dein Schwert in das Wappen,\nund du wirst zum <y+<Triforce >>geführt.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 1, 'param3': 6}
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIn diesem Gebäude befinden sich die\ndrei Quellen heiliger Energie, die drei\nFragmente des <pling><y+<Triforce>>.\n\nIch habe die Orte, an denen ich ihre\nKraft verspüre, auf der Karte mit\n\x25B3 markiert. ")
/*< 42>*/ 	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_125_03() {
/*<  2>*/ 	start()
/*<  7>*/ 	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
          	  case 0:
/*<  8>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 9, 'param3': 30}
/*<  9>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          	  case 1:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 3, 'param3': 17}
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nAus dem eben ertönten Geräusch\nschließe ich, dass sich der <r<<pling>Aufbau\ndes Gebäudes verändert >>hat.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf("Durch diese Veränderung ist es nun\nmöglich, den angrenzenden Raum\nzu betreten.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf("Ich schlage vor, dir durch die Nutzung\ndieser <r<Kontrolltafel >>den Weg zu den\nFragmenten des <y+<Triforce>> zu eröffnen.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf("Ich gehe davon aus, dass es möglich ist,\ndurch das Ändern der Struktur dieses\nGebäudes an verschiedene Orte zu\ngelangen.")
          			goto flw_5
          		}
          	}
          }

