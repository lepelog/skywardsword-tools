          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf("...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf("Wir sind an der <b<Ranelle-Mine >>angekommen.\n\n\n\nSuche mit der Aurasuche nach dem Eingang\nzur Prüfung, die du bestehen musst, um die\nheilige Flamme zu erhalten.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf("Du willst hier arbeiten?\nDann nimm deine komische Kappe ab\nund setz einen Helm auf, bzzz!")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Hier muss die Lore durch, bzzz!\nGeh aus dem Weg!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Wir sind in der <b<Wüste Ranelle >>angekommen.\n\n\n\nSuche mit der Aurasuche nach dem Eingang\nzur Prüfung, die du bestehen musst, um die\nheilige Flamme zu erhalten.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf("...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<304>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<305>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf("...")
          		  case 1:
/*<342>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_307:
/*<307>*/ 				printf("...")
          			  case 1:
/*<306>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 307, 'param3': 31}
          				goto flw_307
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf("Wir sind am <b<Tempel der Zeit >>angekommen.\n\n\n\nSuche mit der Aurasuche nach dem Eingang\nzur Prüfung, die du bestehen musst, um die\nheilige Flamme zu erhalten.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf("In letzter Zeit greifen uns komische Kerle an.\nWir haben keine Waffen, um uns zu wehren.\nDie machen uns fertig, bzzz!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<309>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf("Wie, du bist immer noch da?\nPass auf dich auf, bzzz!")
          			  case 1:
/*<310>*/ 				printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<341>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf("Jetzt kannst du mit dem Käfer Objekte <r<greifen\nund festhalten>>!\n\n\nPass auf dich auf!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<280>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<274>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Du hast mich gerettet, bzzz!")
/*<275>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 276, 'param3': 47}
/*<276>*/ 				set_camera(6, 0)
/*<278>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 277, 'param3': 15}
/*<277>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 279, 'param3': 17}
/*<279>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Das war knapp! Beinahe hätten mir die\nKerle den Strom abgeklemmt, bzzz!\n\n\nAber sag mal...<pause1E> Ist das etwa ein <y<Käfer>>?\nDer kommt von hier, ist aber ein altes Modell...\n\n\nWeil du mir geholfen hast, werde ich dir\ndieses <r<Ding >>ein wenig verbessern.\n\x0E\x01\x09\x04\x1303\x00Gib mal her, bzzz!")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf("Hilf mir, bzzz! Hilfe!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf("\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BGebieter Link, ich habe dir\netwas zu berichten. Wir sind nun in der\n<b<Ranelle-Mine >>angekommen.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf("Gut gemacht, \x0E\x01\x12\x04\x00\x04Gebieter.")
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, du hast die Prüfung bestanden.\nMit deinem reinen Herzen hast du die Kraft\nerlangt, die heilige Flamme zu finden.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf("Dieser <y<Greifhaken>> ist ein Schatz der Göttin.\n\n\n\nNutze die Klaue an der Kette, um dich an <r<Efeu\n>>oder <r<Greifhaken-Zielen >>hochzuziehen.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf("Die Flamme befindet sich irgendwo in der Wüste...\n\x0E\x01\x12\x04\x00\x01Gebieter, ich vermute sie an einem Ort, den du noch\nnicht betreten hast.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf("...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Jetzt kann ich das Innere erforschen!\n\x0E\x01\x09\x04\x00\x2000Und danach will ich zum Siegelhain...\nIch habe zu tun!")
          		  case 1:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x15\x1B09Du... du warst drinnen?!?\n\n\n\n\x0E\x01\x09\x04\x15\x1B00Was sagst du?\nEs gibt einen weiteren Geheimgang?\nDas hättest du mir früher sagen sollen!\n\n\x0E\x01\x09\x04\x08\x2100Ich hatte schon aufgegeben und war nach\nHause aufgebrochen, aber dann hörte ich\ndiesen Lärm und bin zurückgekehrt.\n\n\x0E\x01\x09\x04\x16\x2007Jetzt kann ich das Innere erforschen!\n\x0E\x01\x09\x04\x00\x2000Und danach will ich zum Siegelhain...\nIch habe zu tun!")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Ich würde nur zu gerne da hinein...\nOb es denn wirklich keinen anderen\nWeg zum Tempel gibt?")
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x02Oh, so trifft man sich wieder! Ich will dir\nnicht zu nahe treten, aber dich trifft man\nwirklich an den verrücktesten Orten!\n\n\x0E\x01\x09\x04\x17\x2008Aber hör mal... Ich habe hier gerade die\nEntdeckung des Jahrhunderts gemacht!\n\n\n\x0E\x01\x09\x04\x00\x2000Dies ist der <b<Tempel der Zeit>>, ein sehr\nheiliger Ort.\n\n\n\x0E\x01\x09\x04\x00\x190AUnd stell dir vor, an diesem Ort habe ich\neine <r<Bewohnerin der legendären Insel der\nGöttin >>gesehen!\n\n\x0E\x01\x09\x04\x00\x1900Ihre Kleider waren ganz so, wie sie die\nalten Schriften schildern...\n\n\n\n\x0E\x01\x09\x04\x08\x2105Sie ist mit einer anderen Person in den\nTempel gegangen. Ich wollte ihnen folgen...\n\n\x0E\x01\x09\x04\x15\x1B00Aber da gab es eine Explosion! Und das\nResultat siehst du ja...\n\x0E\x01\x09\x04\x16\x2007Jetzt kommt hier keiner mehr durch.\n\nUnd dabei wüsste ich nur zu gerne,\nwas sie da gesucht haben...")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("An diesem Ort hat sich die Zeit verändert.\n\n\n\nAls du den blauen Stein getroffen hast,\nsind wir in der Zeit zurückgewandert.\n<pling>Ich schätze, dass wir uns hier in der\n<r<Vergangenheit>> befinden.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Sicherheit geht vor!\nHelft, Unfälle zu vermeiden!\n\x09Die Bauleitung")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf("Du interessierst dich für die Steine der Zeit?\nDann musst du ins <b<Ranelle-Steinwerk>>.")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("Ich spüre in dieser Gegend etwas, das dem\n<b<Hauptschalter>> ähnlich ist. Spüre es mit der\n<pling><r<Aurasuche >>auf.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<291>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf("...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf("...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<311>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<312>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("...")
          		  case 1:
/*<344>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<313>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf("")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf("")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf("")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Geplante Fördermenge:\n150 Kisten\n\x09Die Bauleitung")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf("Die Steine der Zeit bewegen uns und\nunsere Maschinen. Ihre Energie\nsprengt jede Skala!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709\x0E\x03\x01\x00Link!\nDu hast das Heim des Donnerdrachen\nbetreten!<pause54>\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDUnd dabei wollte ich der\nErste sein...<pause5A>\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDDas Leben ist ungerecht zu\nso großen Kerlen wie mir...")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AIch habe einen Weg zum Heim des\n<r<Donnerdrachen>> gefunden!<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Leider ist der Zugang zu eng für mich.\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Irgendwas müsste doch zu machen sein...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<272>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Ohoho, Link!")
/*<273>*/ 				set_camera(5, 0)
/*<108>*/ 				printf("Was ist mit der <b<heiligen Flamme>>, von\nder du erzählt hast? Hast du sie denn\ngefunden?\n\nIch bin so neugierig! Erzähle mir doch\nbitte, was dir widerfahren ist!\n\n\n\x0E\x01\x09\x04\x2F08\x407Hmmm.<pause14>.<pause14>.<pause14> Eine steinharte Geschichte,\ndie du mir da erzählst!\n\n\nDu bist wirklich beeindruckend,\nLink!")
/*<355>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AIch kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause0F>\n\n\nEs gibt tatsächlich einen verborgenen\nOrt in der Wüste vor uns!\n\n\nIch habe nämlich einen <r<kleinen Gang>><pling>\ngefunden!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Ich glaube, dass der <r<Donnerdrache>>,\neiner der drei mystischen Drachen der\nLegende, dort sein Zuhause hat.\n\n\x0E\x01\x09\x04\x2F00\x800Ich bin mir ziemlich sicher, dass eine\nVerbindung zwischen ihm und den\nRobotern hier besteht!<pause0F>\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDer <r<Donnerdrache>>, die Roboter,\ndie Steine der Zeit<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWas für ein Mysterium!")
/*<107>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Gut, dass ich dich hier antreffe,\nLink!\n\n\nErinnerst du dich? Du hast mir doch\nvor einiger Zeit ein paar Rubine für\nmeine Forschung gegeben.<pause14>\n\nIch habe hier Steine der Zeit gefunden.\nJetzt habe ich finanziell ausgesorgt!\n\x0E\x01\x09\x04\x2F00\xD01Ich gebe dir das Zehnfache von dem\nzurück, was du mir gegeben hast!")
/*<106>*/ 				rupees += 100;
          				flw_282:
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
/*<269>*/ 				story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<357>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<358>*/ 				story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<359>*/ 				story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          				goto flw_149
          			  case 1:
/*<270>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Ohoho, Link!")
/*<271>*/ 				set_camera(5, 0)
/*<211>*/ 				printf("Was ist mit der <b<heiligen Flamme>>, von\nder du erzählt hast? Hast du sie denn\ngefunden?\n\nIch bin so neugierig! Erzähle mir doch\nbitte, was dir widerfahren ist!\n\n\n\x0E\x01\x09\x04\x2F08\x407Hmmm.<pause14>.<pause14>.<pause14> Eine steinharte Geschichte,\ndie du mir da erzählst!\n\n\nDu bist wirklich beeindruckend,\nLink!")
/*<356>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AIch kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause0F>\n\n\nEs gibt tatsächlich einen verborgenen\nOrt in der Wüste vor uns!\n\n\nIch habe nämlich einen <r<kleinen Gang>><pling>\ngefunden!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Ich glaube, dass der <r<Donnerdrache>>,\neiner der drei mystischen Drachen der\nLegende, dort sein Zuhause hat.\n\n\x0E\x01\x09\x04\x2F00\x800Ich bin mir ziemlich sicher, dass eine\nVerbindung zwischen ihm und den\nRobotern hier besteht!<pause0F>\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDer <r<Donnerdrache>>, die Roboter,\ndie Steine der Zeit<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWas für ein Mysterium!")
          				goto flw_282
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.")
/*<295>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 296, 'param3': 30}
/*<296>*/ 	printf("Die Symbole auf den Hebeln dieses Hauptschalters\nstimmen mit denen der drei bereits betätigten\nSchalter überein.\n\nIch gehe davon aus, dass zwischen ihnen ein\nZusammenhang besteht.")
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf("...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<314>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<315>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf("Der Tempel der Zeit ist wirklich\nwunderschön. Ich könnte jedes Mal\nbzzzen, wenn ich ihn sehe...")
          			  case 1:
/*<316>*/ 				printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<343>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf("Uff, das war knapp, bzzz!\nDanke für deine Hilfe!")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x03\x900Dies ist der <b<Tempel der Zeit>>.\nAn diesem Ort befindet sich das\n<b<Zeitportal>>, das die Göttin erschuf.\n\n\x0E\x01\x09\x04\x03\x900Wir halten die Umgebung des Tempels\nsauber. Zum Zeitportal gelangst du\ndurch das Tor, bzzz!\n\n\x0E\x01\x09\x04\x03\x900Was meinst du? Du suchst einen\nanderen Weg?\n\n\n\x0E\x01\x09\x04\x03\x900Nun, der <b<Tempel der Zeit>> ist mit dem\n<b<Ranelle-Steinwerk>> durch einen\n<r<unterirdischen Gang>> verbunden.\nDas Steinwerk ist hier!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 90, 'param3': 6}
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 97, 'param3': 6}
/*< 97>*/ 			printf("Nanu? Diese Karte hat Fehler. Ich repariere sie.")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x03\x900Das Ranelle-Steinwerk ist da vorne.")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf("Hilfe!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<283>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich habe dir etwas zu berichten.\nIch spüre <b<Zeldas>> Aura nicht mehr.")
/*<284>*/ 	set_camera(7, 0)
/*<285>*/ 	printf("Als dieses Portal zerstört wurde, habe\nich Zeldas Aura plötzlich verloren.\n<pling><r<Du kannst sie mit der Aurasuche nicht\nmehr aufspüren.>>")
/*<286>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("Zeldas Begleiterin sagte, du solltest\ndie Hüterin des Siegelhains treffen...\n\n\nIch schlage vor, dass du dich zum\n<b<Tempel des Siegels>> begibst.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf("Putzplan für den Tempel\n\x09Die Bauleitung")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf("Was macht ein Mensch an diesem Ort?\nSuchst du etwa Steine der Zeit, bzzz?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<317>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<318>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf("...")
          		  case 1:
/*<346>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<319>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf("")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf("Keine Chance der Dürre!\nMachen wir Ranelle grüner!\n\x09Die Bauleitung")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf("...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<320>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<321>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf("Dies ist das <b<Ranelle-Steinwerk>>!\nIn ihm stellen wir die Steine der Zeit her.\n\n\n\x0E\x01\x09\x04\x1303\x00Immer wieder ein toller Anblick, bzzz!")
          					  case 1:
/*< 82>*/ 						printf("Du hast die Kombination gefunden?\nNicht zu fassen!\n\n\n\x0E\x01\x09\x04\x1303\x00Dies ist das <b<Ranelle-Steinwerk>>!\nIn ihm stellen wir die Steine der Zeit her.\n\n\n\x0E\x01\x09\x04\x1303\x00Immer wieder ein toller Anblick, bzzz!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<322>*/ 					printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<345>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf("Du hast die richtige Kombination gefunden?\nDoch damit alleine wirst du das Steinwerk\nnicht betreten können, bzzz...")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf("Wer bist du, bzzz?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Dies ist der Hauptschalter zum\nEingang des Ranelle-Steinwerks.\n\n\n\x0E\x01\x09\x04\x1303\x00Nur eine bestimmte <r<Kombination der\ndrei Zeiger >>wird dieses Tor öffnen!")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf("\x0E\x01\x05\x04Z\x00Seit Hunderten von Jahren wird diese\nGegend nach und nach zu einer Wüste.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf("Dieser Roboter scheint schon sehr lange\nnicht mehr zu funktionieren. Ich verstehe\nnicht, was er uns sagen will...")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<323>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<324>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("...")
          		  case 1:
/*<348>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<325>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x05\x04Z\x00Ich schätze, dass <b<Zelda>> hierhergekommen\nund bereits vorausgeeilt ist.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf("Vor Kurzem wurde einer meiner\nFreunde entführt! Man munkelt, dass\ndiese Kerle uns die Energie abzapfen...\nWie schrecklich!")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<288>*/ 	start()
/*<289>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 290, 'param3': 40}
/*<290>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': -1, 'param3': 6}
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<326>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<327>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf("Du hast die Kombination gefunden?\nNicht zu fassen!")
          			  case 1:
/*<328>*/ 				printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<347>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf("Bzzz!\nWas soll das denn?\n\n\n\x0E\x01\x09\x04\x1303\x00Glaube ja nicht, dass dich die richtige\nKombination alleine ins Steinwerk bringt!")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf("Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n\x0E\x01\x09\x04\x1303\x00Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf("Du siehst verdächtig aus, bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf("\x0E\x01\x05\x04Z\x00Wir sind in der <b<Wüste Ranelle >>angekommen.\nEine große Dürre hat den gesamten Landstrich\nvollkommen verändert.")
          }

          void entrypoint_400_76() {
/*<292>*/ 	start()
/*<293>*/ 	printf("Wir sind am <b<Tempel der Zeit >>angekommen.\n\n\n\nSuche mit der Aurasuche nach dem Eingang\nzur Prüfung, die du bestehen musst, um die\nheilige Flamme zu erhalten.")
/*<294>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf("Die blauen Steine sind gefährlich und\nnix für Menschen. Rühr sie nicht an\nund störe uns nicht bei der Arbeit!")
          	  case 1:
/*< 24>*/ 		printf("Wo kommst du denn her?\nWir sammeln hier die Steine der Zeit.\nDie tragen wir zum <b<Ranelle-Steinwerk>>.\n\n\x0E\x01\x09\x04\x1303\x00Die Steine sind gefährlich und nix\nfür Menschen. Rühr sie nicht an!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<329>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<330>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf("...")
          		  case 1:
/*<350>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<331>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<298>*/ 	start()
/*<299>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDu hast die richtige Kombination der drei\nSchalter gefunden.\n\nBegib dich nun zum <r<Hauptschalter>> am\n<b<Ranelle-Steinwerk>>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<332>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<333>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf("Du hast die Kombination herausbekommen?\nNicht zu fassen!")
          			  case 1:
/*<334>*/ 				printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<349>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf("Bzzz!\nWas machst du da?\n\n\n\x0E\x01\x09\x04\x1303\x00Mit der richtigen Kombination alleine\nkommst du dort nicht rein!")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf("Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n\x0E\x01\x09\x04\x1303\x00Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf("Du siehst verdächtig aus, bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf("\x0E\x01\x05\x04Z\x00Ich stelle eine erhöhte Konzentration\nvon gefährlichem <r<Treibsand>> fest.\nDas Gefahrenpotenzial steigt um 30 %.")
          }

          void entrypoint_400_78() {
/*<300>*/ 	start()
/*<301>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nIch schätze, dass es notwendig ist, dieses\n<r<Gerät>> mit Strom zu versorgen.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<335>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<336>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf("...")
          		  case 1:
/*<352>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<337>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x05\x04Z\x00Ich empfehle, \x0E\x02\x04\x02\x2CD zu drücken, um auf deiner Karte\ndie <pling><r<Bodenbeschaffenheit>> zu prüfen.\x0E\x01\x11\x02\x2CD")
          }

          void entrypoint_400_79() {
/*<302>*/ 	start()
/*<303>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDie Übereinstimmung deiner Karte mit\nder derzeitigen Umgebung beträgt 35 %.\nDer Unterschied ist beträchtlich.\n\nIch schätze, dass die WR-301-Einheit\nvorhin die Karte an das <r<frühere\nLandschaftsbild>><pling> angepasst hat.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Die Lore ist für die Steine der Zeit\ngedacht. Menschen haben nichts da\ndrinnen verloren! Verzieh dich! Bzzz!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<338>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<339>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf("Du hast die Kombination herausbekommen?\nNicht zu fassen!")
          			  case 1:
/*<340>*/ 				printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x1303\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<351>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf("Bzzz!\nWas machst du da?\n\n\n\x0E\x01\x09\x04\x1303\x00Mit der richtigen Kombination alleine\nkommst du dort nicht rein!")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf("Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n\x0E\x01\x09\x04\x1303\x00Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf("Du siehst verdächtig aus, bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x05\x04Z\x00Ich schätze, dass <b<Zelda>> hier war.\nWie ich bereits sagte, birgt diese\nGegend Gefahren für dich.\n\n\x0E\x01\x05\x04Z\x00Ich empfehle, sie bald zu treffen,\num zu erfahren, aus welchem Grund\nsie nach <b<Eldin>> gereist ist.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\n\x0E\x01\x12\x04\x00\x02Gebieter, du stehst auf Treibsand, ohne zu versinken.\nIch empfehle dir, die Karte zu konsultieren.")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf("An dieser Stelle verlief einst eine Straße,\ndie nun durch den Treibsand verdeckt wird.\n\n\nEs scheint, als könntest du hier laufen,\nohne zu versinken.\n\n\nIch empfehle, Signallichter auf der Karte\nzu setzen, um den Weg zu markieren.")
/*<212>*/ 	printf("Ich empfehle, <b<mehrere>><pling> Signallichter zu setzen.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf("...")
          }

          void entrypoint_400_80() {
/*<353>*/ 	start()
/*<354>*/ 	printf("<b<Wüstengras>> kannst du in der Wüste\nRanelle und anderen Orten finden.\nEs rollt über den Boden und kann für\nallerlei Dinge verwendet werden.\nWenn du es siehst, fange es schnell mit\ndeinem <r<Schmetterlingsnetz>> ein.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf("Quatsch uns nicht von der Seite an!\nDu störst uns bei der Arbeit!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Du bist doch Link?\nWusste ich's doch! \x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDSchön, dich\nzu sehen!<pause0F>\n\nDu kommst mir wie gerufen!<pause0F>\n\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDKomm mal rauf zu mir!")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

