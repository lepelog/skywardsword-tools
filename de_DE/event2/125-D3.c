          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 7, unk: 0, line: 7 */ "Finde die<color red< leuchtenden Steine>coloroff>.\nSchlage den Untersten zuerst,\nnur so öffnet sich das Tor.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "Bitte sieh, <0x10012:0x00000001>Gebieter.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Dieses Wappen auf dem Boden\nist das <color red<Wappen von Farore>coloroff>.\n\n\nIch spüre die Macht des <color yellow white<Triforce>coloroff>,\ndie davon ausgeht.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "Ich schlage vor, durch diese Tür zu\ngehen, um das heilige Wappen zu\nerreichen.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "Bitte sieh, <0x10012:0x00000001>Gebieter.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "Dieses Wappen auf dem Boden\nist das <color red<Wappen von Nayru>coloroff>.\n\n\nIch spüre die Macht des <color yellow white<Triforce>coloroff>,\ndie davon ausgeht.\n\n\nDer Weg dorthin scheint jedoch\nversperrt zu sein.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "Lenke deinen Blick in diese Richtung.\nDort befindet sich eine <color yellow<Kugel der Zeit>coloroff>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Nutze die <color yellow<Kugel der Zeit>coloroff>, um den Weg\nzum <color red<Wappen >coloroff>zu öffnen.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "Bitte sieh, <0x10012:0x00000001>Gebieter.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 2, unk: 0, line: 17 */ "Dieses Wappen auf dem Boden\nist das <color red<Wappen von Din>coloroff>.\n\n\nIch spüre die Macht des <color yellow white<Triforce>coloroff>,\ndie davon ausgeht.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Es scheint jedoch nicht möglich,\ndas Wappen zu erreichen.\n\n\nIch schlage vor, einen anderen\nEingang zu diesem Raum zu suchen.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 19 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDies ist der Raum, in dem sich das\n<color red<Wappen von Din>coloroff> befindet. Du warst\nbereits hier.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 2, unk: 0, line: 20 */ "Die Wahrscheinlichkeit, dass du die\nheilige Kraft erreichen kannst, wenn\ndu die Lava überquerst, liegt bei 60 %.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 2, unk: 0, line: 22 */ "Halte an deinem Willen fest\nund schreite voran, Gebieter.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nIch spüre eine heilige Kraft\nin diesem Raum.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Du hast das Wappen\nerreicht.\n\nStoße dein Schwert in das Wappen,\nund du wirst zum <color yellow white<Triforce >coloroff>geführt.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Du hast das Wappen\nerreicht.\n\nStoße dein Schwert in das Wappen,\nund du wirst zum <color yellow white<Triforce >coloroff>geführt.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Du hast das Wappen\nerreicht.\n\nStoße dein Schwert in das Wappen,\nund du wirst zum <color yellow white<Triforce >coloroff>geführt.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	wait_frames(15)
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nIn diesem Gebäude befinden sich die\ndrei Quellen heiliger Energie, die drei\nFragmente des <sound 4><color yellow white<Triforce>coloroff>.\n\nIch habe die Orte, an denen ich ihre\nKraft verspüre, auf der Karte mit\n△ markiert. ")
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
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nAus dem eben ertönten Geräusch\nschließe ich, dass sich der <color red<<sound 4>Aufbau\ndes Gebäudes verändert >coloroff>hat.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 2, line: 4 */ "Durch diese Veränderung ist es nun\nmöglich, den angrenzenden Raum\nzu betreten.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 5 */ "Ich schlage vor, dir durch die Nutzung\ndieser <color red<Kontrolltafel >coloroff>den Weg zu den\nFragmenten des <color yellow white<Triforce>coloroff> zu eröffnen.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Ich gehe davon aus, dass es möglich ist,\ndurch das Ändern der Struktur dieses\nGebäudes an verschiedene Orte zu\ngelangen.")
          			goto flw_5
          		}
          	}
          }

