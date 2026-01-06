          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "")
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 0, line: 53 */ "")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ich habe das soeben gefundene Item analysiert.\nSeine insektenähnliche Gestalt deutet auf\n<sound 4><color red<Flugfähigkeit>coloroff> hin.\n\nWenn du es fliegen lässt, solltest du es <color red<aus der\nEntfernung>coloroff> steuern sowie kleinere Objekte treffen\noder mit seinen Zangen zerschneiden können.\n\nDrücke <icon 41>, um das Fluggerät zum Abflug bereit\nzu machen, und <icon 37>, um mehr über seine Bedienung\nzu erfahren.<0x10011:0x0fcd><0x10011:0x0bcd>")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Aus dem Inneren des Tempels spüre ich\ndie Aura <color yellow<heiligen Wassers>coloroff>, aber du\nkannst<sound 4> <color red<die Aurasuche hier nicht\neinsetzen>coloroff>.\nAufgrund der Stärke der Aura vermute\nich, dass sich das Wasser sehr tief im\nTempel befindet.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 30}
/*<205>*/ 		wait_frames(15)
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Ich empfehle, den mit (X) markierten\nPunkt zur Orientierung zu nutzen und\nin das Innere des Tempels vorzustoßen.")
/*<207>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 78, 'param3': 34}
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 2, line: 13 */ "Ich spüre noch mehr bösartige Wesen an diesem Ort\nals bei deinem ersten Besuch. Sei äußerst vorsichtig.")
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 2, line: 13 */ "Ich spüre noch mehr bösartige Wesen an diesem Ort\nals bei deinem ersten Besuch. Sei äußerst vorsichtig.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 7, line: 1 */ "Triff die Juwelen, die auf der\nKarte mit (X) markiert sind.\nFinde die Karte in der zentralen\nKammer.")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10012:0x00000004>Gebieter, wie ich gerade übersetzt habe,\nhat sich <color blue<Zelda >coloroff>hier spirituell gereinigt.\n\n\nMit einer Wahrscheinlichkeit von 97 % hat sie\nsich zur nächsten Quelle in <color blue<Eldin>coloroff> begeben.\n\n\nWie sie sich fortbewegt, ist allerdings unklar.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "Aber wenn wir die soeben gefundene Steintafel zum\nPodest im <color blue<Wolkenhort >coloroff>bringen...\n\n\n<sound 4>Dann wird vermutlich eine <color red<neue Lichtsäule>coloroff> erscheinen\nund wir können die Suche nach Zelda fortsetzen.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ich empfehle, die <color blue<Statue>coloroff> vor dem Tempel zu\nverwenden, um ins Wolkenmeer zurückzukehren.")
          		flw_79:
/*< 79>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 81, 'param3': 36}
/*< 81>*/ 		wait_frames(15)
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "Im Wald gibt es sicher einen Weg, zum Wolkenmeer\nzurückzukehren.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Ich spüre <color yellow<heiliges Wasser >coloroff>in der Nähe. Es gibt keine\nStörungen durch Auren von Kreaturen, daher ist die\n<color red<Aurasuche verfügbar>coloroff>.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Der du vom Himmel kommst,\nhöre auf deinen Diener, der\ndich ins Erdland gebracht hat.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 47, 'param2': 0, 'next': 167, 'param3': 40}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 330, 'param2': 0, 'next': 168, 'param3': 51}
/*<168>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 169, 'param3': 17}
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 65 */ "Mit einer Wahrscheinlichkeit von 95 % ist dies\ndasselbe Wasser wie im Wasserbehälter des\nWasserdrachen. Gehen wir zurück zu ihm.")
/*< 82>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 36}
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		wait_frames(15)
          	  case 1:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 66 */ "Dieses Wasser unterscheidet sich von gewöhnlichem\nWasser, da es eine höhere Energie in sich birgt.\n\n\nWenn es mit einem Element derselben Wellenlänge\nin Berührung kommt, wird es vermutlich verstärkt.")
/*<166>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Die Türen der Kammern zur\nLinken und zur Rechten...\nTriff die Juwelen...\nEinmal oben, einmal unten.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Nun...<pause 15> Für ein Kind hast du ganz\nbrauchbar gekämpft.\n\n\nAber bilde dir nichts darauf ein...<pause 15>\nDu solltest lieber deinem Schwert danken.")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Gebieter... Mit „Diener“ bin vermutlich ich gemeint.\n\n\n\nUm meinem <0x10012:0x00000002>Gebieter beistehen zu können, hat mich\ndie Göttin mit umfangreichem Wissen über dieses\nLand ausgestattet.\n\nDu kannst mich jederzeit durch Drücken\nvon (v) rufen.\n<0x10011:0x09cd>\n\nDu kannst auch etwas durch Drücken von (Z)\n<color green<anvisieren>coloroff> und mich mithilfe von (v) rufen, damit\nich dir genauere Informationen zu deinem Ziel gebe.<0x10011:0x07cd><0x10011:0x09cd>")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 7, line: 4 */ "")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "Ich habe mich wohl zu lange mit dir\nabgegeben. Ihre Präsenz schwindet...<pause 15>\nHier gibt es nichts mehr für mich.\nLebe wohl, Himmelskind.\nIch lasse dich gehen, aber komm mir\nkein zweites Mal unter die Augen.")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Dies ist ein Wächter, der durch Magie erzeugt wurde.\nSein sensibles Auge folgt dem, was sich vor ihm\nbefindet.")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Die beiden Augen scheinen hinter der Wand\nmiteinander verbunden zu sein. Ich vermute,\ndass sie sich nicht einzeln besiegen lassen.")
/*<218>*/ 	wait_frames(15)
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 196, 'param3': 32}
/*<196>*/ 	make_actor_do_something(3, 16)
/*<197>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 198, 'param3': 16}
/*<198>*/ 	wait_frames(5)
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	make_actor_do_something(4, 16)
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 46, 'param3': 13}
/*< 46>*/ 		printf(/* textboxtype: 0, unk: 2, line: 22 */ "Verflucht...\nDer ganze Ärger, diesen Monstern den\nSchlüssel abzuknöpfen... Umsonst!")
/*< 47>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 43, 'param3': 13}
/*< 43>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Ich habe ihn in einem Loch versteckt,\naber ich weiß nicht mehr, wo...")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 			printf(/* textboxtype: 2, unk: 0, line: 24 */ "Egal, der Schatz, hinter dem ich her bin,\nist mehr wert als irgend so ein Schlüssel!")
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10005:0x004b0000>Nettes Schwert.<pause 15>\nAber solange ich die <color red<Bewegungen\ndeines Schwertes>coloroff> sehe, blocke ich\njeden deiner Angriffe mit einer Hand.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10012:0x00000004>Gebieter, in der Nähe befindet sich\nein Ziel, das du anvisieren kannst.\n\n\nDrücke (Z), um ein Ziel <color green<anzuvisieren>coloroff>,\nund rufe mich mithilfe von (v). Ich\ngebe dir dann genauere Informationen\nzu deinem Ziel.<0x10011:0x07cd><0x10011:0x09cd>")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 224, 'param3': 32}
/*<224>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 225, 'param3': 17}
/*<225>*/ 	wait_frames(15)
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 227, 'param3': 36}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_92() {
/*< 51>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 154, 'param3': 32}
/*<154>*/ 	make_actor_do_something(3, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 161, 'param3': 17}
/*<161>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 57, 'param3': 16}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3342, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Moment, dich habe ich doch schon am\nVulkan getroffen...")
/*< 56>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2065, 'next': 52, 'param3': 13}
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Suchst du hier auch nach Schätzen?\n[1-]Ertappt![2-]Nein.")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 60, 'param3': 13}
/*< 60>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Aha! Dachte ich mir's doch!\nIch kann an deinem Gesicht sehen,\ndass du auf Schätze aus bist!")
          		flw_61:
/*< 61>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2059, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "Bist du auch wegen der Geschichte\ndieses Felstyps hier?\n[1-]Du meinst den\nGoronen?[2-]Welche\nGeschichte?")
/*< 95>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2050, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Man soll an Stellen im Tempel, an denen\nSchmetterlinge flattern, <sound 4>schöne <color green<Klänge spielen>coloroff>...")
/*< 97>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 2057, 'next': 98, 'param3': 13}
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "Aber das ist Unsinn!\nEgal, wie oft ich ein Liedchen summe,\nes passiert nichts!")
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 100, 'param3': 13}
/*<100>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "Aber wenn ich schon mal hier bin, suche ich\nnoch ein bisschen nach Schätzen!")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 53>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 54, 'param3': 13}
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 1, line: 39 */ "Du brauchst gar nicht so zu tun!\nIch kann an deinem Gesicht sehen,\ndass du auf Schätze aus bist!")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000004>Gebieter, das Wasser hier ist... <pause 15><color red<ganz normales Wasser>coloroff>.\n\n\n\nIch vermute, dass sich das <color yellow<heilige Wasser>coloroff>, welches der\nWasserdrache benötigt, sehr tief im Tempel befindet.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 200, 'param3': 32}
/*<200>*/ 	make_actor_do_something(3, 16)
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 202, 'param3': 16}
/*<202>*/ 	wait_frames(5)
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	zone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	make_actor_do_something(4, 16)
/*< 69>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4364, 'next': 67, 'param3': 13}
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Das darf nicht wahr sein... Und dafür hab ich\njetzt den langen Weg auf mich genommen!")
/*< 68>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4112, 'next': 64, 'param3': 13}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Hier muss schon einer alles leer geräumt\nhaben... Es ist nix mehr da, nur noch <color yellow<Wasser>coloroff>.")
/*< 65>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4615, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Und wer braucht das denn?")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2061, 'next': 71, 'param3': 13}
/*< 71>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Ich geh heim.\nMan sieht sich!\n")
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_94() {
/*<101>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 46}
/*<138>*/ 	set_camera(2, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 143, 'param3': 32}
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 139, 'param3': 49}
/*<139>*/ 	make_actor_do_something(4, 16)
/*<137>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 49}
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4096, 'param2': 1, 'next': 113, 'param3': 13}
/*<113>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 136, 'param3': 40}
/*<136>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 106, 'param3': 17}
/*<106>*/ 	wait_frames(45)
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 109, 'param3': 15}
/*<109>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 111, 'param3': 17}
/*<111>*/ 	wait_frames(15)
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 112, 'param3': 14}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 103, 'param3': 17}
/*<103>*/ 	wait_frames(15)
/*<102>*/ 	entrypoint_201_92();
          }

          void entrypoint_201_95() {
/*<114>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 148, 'param3': 46}
/*<148>*/ 	set_camera(5, 0)
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 149, 'param3': 32}
/*<149>*/ 	make_actor_do_something(4, 17)
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 145, 'param3': 49}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 17, 'next': 144, 'param3': 17}
/*<144>*/ 	wait_frames(15)
/*<162>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': -1, 'next': 115, 'param3': 16}
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 117, 'param3': 13}
/*<117>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "Hey! Willst du mich hintergehen?")
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 119, 'param3': 13}
/*<119>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "Hm...<pause 30>\nDa ist ein komisches Muster auf der Wand,\nund weiter?")
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 2057, 'next': 121, 'param3': 13}
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Der Felstyp hat Unsinn geredet, eindeutig.")
/*<122>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2050, 'next': 123, 'param3': 13}
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ich geh dann mal vor!")
/*<124>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<128>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3329, 'next': 126, 'param3': 13}
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Moment, dich habe ich doch schon am\nVulkan getroffen...")
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 125, 'param3': 13}
/*<125>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Suchst du hier auch nach Schätzen?\n[1-]Ertappt![2-]Nein.")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 133, 'param3': 13}
/*<133>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "Aha! Dachte ich mir's doch!\nIch kann an deinem Gesicht sehen,\ndass du auf Schätze aus bist!")
          			flw_152:
/*<152>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 153, 'param3': 13}
/*<153>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "Bist du auch wegen der Geschichte\ndieses Felstyps hier?\n[1-]Du meinst den\nGoronen?[2-]Welche\nGeschichte?")
/*<134>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3339, 'next': 135, 'param3': 13}
/*<135>*/ 			printf(/* textboxtype: 0, unk: 1, line: 52 */ "Ich werde den Schatz zuerst finden!")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4617, 'next': 130, 'param3': 13}
/*<130>*/ 			printf(/* textboxtype: 1, unk: 1, line: 39 */ "Du brauchst gar nicht so zu tun!\nIch kann an deinem Gesicht sehen,\ndass du auf Schätze aus bist!")
          			goto flw_152
          		}
          	}
          }

          void entrypoint_201_96() {
/*<172>*/ 	start()
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 261, 'param3': 32}
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 173, 'param3': 16}
/*<173>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<174>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<181>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3345, 'next': 177, 'param3': 13}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "Was?\nDu hast ihn selbst verwendet?")
          			flw_182:
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 178, 'param3': 13}
/*<178>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Aber wenn ich so darüber nachdenke, brauchen\nwir Mogma ja eigentlich keine Schlüssel...")
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 179, 'param3': 13}
/*<179>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "Danke für deine Mühe!\nWeiter geht die Schatzjagd!")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<180>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "Oh! Du hast meinen Schlüssel gefunden?")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 251, 'param3': 13}
/*<251>*/ 			printf(/* textboxtype: 2, unk: 0, line: 27 */ "Das gibt es doch nicht...\nIch finde ihn nicht...")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 188, 'param3': 13}
/*<188>*/ 			printf(/* textboxtype: 0, unk: 2, line: 28 */ "Ich weiß noch, dass ich den Schlüssel\nvergraben habe, aber mir fällt leider\nnicht mehr ein, an welchem Ort...")
/*<191>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3345, 'next': 190, 'param3': 13}
/*<190>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Wo war das nur? In diesem Raum wohl nicht...\nHast du vielleicht eine Karte?")
          			goto flw_256
          		  case 1:
/*<253>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3329, 'next': 250, 'param3': 13}
/*<250>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Kann ich was für dich tun?\n\n[1-]Was ist mit\ndem Schlüssel?[2-]Was für ein\nSchatz?[3]Nein, im\nGrunde nicht.")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 184, 'param3': 13}
/*<184>*/ 				printf(/* textboxtype: 0, unk: 0, line: 29 */ "Der Felstyp hat was von einem <color yellow<goldenen\nSchlüssel>coloroff> erzählt, mit dem sich eine wichtige\nTür öffnen lässt, jawohl!")
/*<187>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3332, 'next': 186, 'param3': 13}
/*<186>*/ 				printf(/* textboxtype: 0, unk: 2, line: 31 */ "Du siehst aus, als wüsstest du was...")
          				goto flw_256
          			  case 2:
          			}
          		}
          	}
          }

          void entrypoint_201_97() {
/*<231>*/ 	start()
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 242, 'param3': 32}
/*<242>*/ 	make_actor_do_something(3, 16)
/*<243>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 244, 'param3': 16}
/*<244>*/ 	wait_frames(5)
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	zone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	make_actor_do_something(4, 16)
/*<237>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Verflucht...\nDer ganze Ärger, diesen Monstern den\nSchlüssel abzuknöpfen... Umsonst!")
/*<236>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 232, 'param3': 13}
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Ich habe ihn in einem Loch versteckt,\naber ich weiß nicht mehr, wo...")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 234, 'param3': 13}
/*<234>*/ 		printf(/* textboxtype: 0, unk: 2, line: 25 */ "Der Schlüssel sollte mir den Weg zu\ngewaltigen Reichtümern bahnen...<pause 15>\nIch bin mir sicher, dass ich ihn hier <color red<in\nder Nähe>coloroff> vergraben habe...")
/*<238>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Ich spüre <color blue<Zeldas>coloroff> Aura.\nMit großer Wahrscheinlichkeit\nbefindet sie sich hinter dieser großen Tür.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 7, unk: 0, line: 6 */ "")
          }

          void entrypoint_201_99() {
/*<163>*/ 	start()
/*<164>*/ 	switch (temp_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<165>*/ 		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
          	  case 1:
          	}
          }

          void entrypoint_201_13() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "Es scheint, als wäre der Mechanismus zum Öffnen\nder Tür deaktiviert worden.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x0000000b>Gebieter, ich nehme in diesem Tempel\ndie Auren vieler Kreaturen wahr.\n\n\nDaher kann ich Zeldas Aura nicht\nisolieren<0x10006:0xfecd>...<pause 15>\n<0x10006:0x00cd><sound 4>Somit ist die <color red<Aurasuche >coloroff>momentan\n<color red<nicht einsetzbar>coloroff>.\n<0x10012:0x00000001>Ich schlage vor, dass du dich <color green<umsiehst>coloroff>,\num dir einen Überblick zu verschaffen.")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000004>Gebieter, ich habe Informationen zum Öffnen\ndieser Tür.\n\n\nDie zum Öffnen der Tür benötigte Vorrichtung\nmuss sich in der Nähe befinden.\n\n\nDie Wahrscheinlichkeit, diese Vorrichtung durch\nsorgfältiges <color green<Umsehen>coloroff> zu entdecken, beträgt 80 %.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 2, line: 10 */ "Ghirahims Untergebene scheinen die Tür wieder\nverschlossen zu haben. Du musst den Schlüssel\nerneut suchen.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }

