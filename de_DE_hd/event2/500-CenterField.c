          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00434500>Was war das denn?\nDu musst schon zielen, wenn du den Kerl\ntreffen willst!\n\n<0x10009:0x00414000>Ich lege dann mal das nächste Geschoss ein.\nSag mir Bescheid, wenn es losgehen soll!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10009:0x00000001>Ich werde nun noch etwas diese Statue\nuntersuchen.")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00080b07>Den alten Schriften zufolge liegt\nirgendwo in den Wolken die <color red<Insel\nder Göttin>coloroff>.\n\nDiese alten Statuen dienten angeblich\neinst dazu, zu dieser Insel der Göttin\nzurückzukehren.\n\nUnd diese Statue hier hat angeblich\ndie besondere Kraft, all die anderen\nStatuen, die es hier gibt, zu <color red<erwecken>coloroff>.\n\n<0x10009:0x00161900>Es mag wie ein Märchen klingen,\naber ich glaube daran.\n\n\n<0x10009:0x00000b04>Wie könnte man sonst den Umstand\nerklären, dass sie überall in dieser\nWelt verstreut herumstehen?")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>Langweile ich dich mit meinen Erzählungen?\nOder willst du mehr hören?\n[1-]Gerne![2]Jetzt nicht.")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 0, unk: 2, line: 61 */ "<0x10009:0x00151902>Oho!\nKennst du auch die alten Legenden?\n\n\n<0x10009:0x00160b00>Ich kann dir von ihnen berichten...\n\n\n\nMan sagt, die Bewohner der Insel der\nGöttin flögen auf Vögeln durch die Lüfte!\n\n\n<0x10009:0x00001e00>Ein friedliches Inselreich, dessen\nBewohner der Göttin treu ergeben sind...\n\n\n<0x10009:0x00000b00>Ich glaube wirklich, dass uns diese Kultur\num einige Felslängen voraus ist!")
/*<426>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080b00>Aber halt! Das ist noch nicht alles!\nDas wirklich Interessante kommt erst noch...\n\n\n<0x10009:0x001f1e00>Da die Göttin selbst diese Insel geschaffen hat,\nist sie voller Dinge, die uns hier unten wie\nWunder erscheinen mögen!\n\n<0x10009:0x00001908>Alle Gebäude dort sind aus massivem Gold!\nHeiliges Wasser fließt aus nie versiegenden\nQuellen, und wer es trinkt, wird ewig leben,\nheißt es!\n<0x10009:0x00000b00>Die Früchte der Bäume heilen alle Krankheiten,\nund die Kürbisse auf den Feldern werden\nnie schlecht. Unzählige Blumenarten sollen\ndort wachsen!\n<0x10009:0x00171900>Es ist dort weder heiß noch kalt, sondern man\nlebt in einem ewigen Frühling! Dies ist die\nInsel der Göttin.\n\n<0x10009:0x00000b05><0x10008:0x01cd>Was meinst du, ist das nicht steinhart?\n\n\n\n<0x10009:0x00211806><0x10008:0x02cd>Willst du noch mehr hören?\n\n\n\n<0x10008:0x01cd>Was meinst du?\n[1-]Gerne![2]Es reicht.")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00271956>Ach so!\nDann hat also auch dich das Inselfieber\ngepackt, was?\n\n<0x10009:0x00161e00>Ich würde dir ja gerne mehr erzählen,\naber dafür muss ich zuerst noch\nweitere Nachforschungen anstellen.\n\n<0x10009:0x00000b00>Beim nächsten Mal, ja?")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>In Ordnung.\nDen Rest erzähle ich dir dann ein anderes Mal...")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>In Ordnung.\nDen Rest erzähle ich dir dann ein anderes Mal...")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 0, unk: 11, line: 53 */ "<0x10009:0x00000008>Danke für deine Hilfe!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>Wo kommen diese roten Kerle her?\nFrüher haben sie sich in diesem Wald jedenfalls\nnicht herumgetrieben...\n\n<0x10009:0x00161e00>Und so einen wie dich sehe ich heute schon zum\nzweiten Mal! Was ist das nur für ein Tag?!?\n\n\n<0x10009:0x00000b00>Na ja, als Dank für deine Hilfe erzähle ich dir\netwas Interessantes!")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 11, unk: 1, line: 55 */ "<0x10009:0x00080b01>Ich studiere hier in diesem Wald die\nGeschichte des Altertums. Darf ich\nmich vorstellen? Ich bin <color blue<Marugo>coloroff>, ein\nGorone.\n<0x10009:0x00001700>Den alten Schriften zufolge liegt\nirgendwo in den Wolken die <color red<Insel\nder Göttin>coloroff>.\n\n<0x10009:0x00000b00>Diese <color blue<alten Statuen>coloroff> dienten angeblich\neinst dazu, zu dieser Insel der Göttin\n<color red<in den Himmel aufzusteigen>coloroff> und von\ndort wieder zurückzukehren.\nWenn du eine davon <color red<findest>coloroff>, solltest du\nsie auf jeden Fall <color red<untersuchen>coloroff><sound 4>, da dir\ndie Statuen als Anhaltspunkte dienen.\nDas ist wirklich praktisch!\nUnd diese Statue hier hat angeblich\ndie besondere Kraft, all die anderen\nStatuen, die es hier gibt, zu erwecken.\n\n<0x10009:0x00161907>Es mag wie ein Märchen klingen,\naber ich glaube daran.\n\n\nWie könnte man sonst den Umstand\nerklären, dass sie überall in dieser\nWelt verstreut herumstehen?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 11, unk: 1, line: 52 */ "<0x10009:0x00000b52>Verschwindet! Aaargh!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>Ihr fiesen Biester! Lasst mich in Ruhe!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 6, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Gebieter, <heroname>.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>Oooh!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Komm, steig in das Katapult! Ich weiß\nzwar nicht, ob es klappen wird, aber ich\nhelfe dir, so gut ich kann!")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>Dies ist das <color blue<Erdland>coloroff>, über das im Wolkenhort so viele\nLegenden kursieren...")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hey! <0x30001:0x><heroname>!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Sieh dir das an!\nDas ist meine mächtige Geheimwaffe!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Mein <color red<mächtiges Katapult>coloroff>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Da fällt dir nichts mehr ein, was?\nIch muss gestehen, ich habe mich dafür\nauch mächtig ins Zeug gelegt...")
/*<462>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Schau gut hin!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>Die ganzen Schienen rund um diese\nGrube habe ich ganz alleine gelegt.\nKlasse, was?\n\nIch bin selbst ganz begeistert von mir!<pause 30>\nWusste gar nicht, dass ich so vielseitig\nbegabt bin...\n\n<0x10009:0x28414000>Jetzt gilt es nur noch, das Katapult in\nStellung zu bringen und dem Kerl eine\nordentliche Ladung zu verpassen!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Mit so ein paar Bomben sollten wir\nselbst einen Koloss wie ihn für kurze\nZeit außer Gefecht setzen können!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Aber ein wenig zu früh kommt er mir schon...")
/*<451>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>Ich muss hier noch ein paar kleine\nVorbereitungen treffen, um das\nKatapult bewegen zu können.\n\nIch melde mich, wenn ich so weit bin!\nBis dahin bist du ganz auf dich allein gestellt.")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 2, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 2, line: 13 */ "<0x10005:0x004b0000>Und das hier... Man nennt diesen Ort den <color blue<Siegelhain>coloroff>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "...<0x10006:0xfdcd>Mein Kind!\n\n\n\n<0x10006:0xfdcd>Kind des Himmels, das aus den Wolken kam...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Er hat das Siegel gebrochen!\n\n\n\nIch erzähle dir später mehr darüber.\n\n\n\nJetzt musst du erst dafür sorgen, dass er nicht\naus seinem Loch entkommen kann.\n\n\nEr darf den Tempel nicht erreichen!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Los! <0x30001:0x><heroname>!<pause 30>\n\n\n\nLenke den <color red<Himmelsstrahl >coloroff>auf den Siegelstein!\n\n\n\n<0x10009:0x00111700>Schnell!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	wait_frames(30)
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	wait_frames(10)
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	wait_frames(60)
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	wait_frames(10)
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 0, unk: 11, line: 119 */ "<0x10009:0x28000053>Was zum...<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>Oh-oh, gleich geht es los...<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>Keine Panik!\n\n\n\n<0x10009:0x28410000>Du kennst ja mein <color red<mächtiges Katapult >coloroff>bereits...")
/*<256>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>Solange wir das haben, kann uns dieser\nKoloss keine Angst einjagen!\n\n\n<0x10009:0x28000200>Dieser Kerl ist wirklich mein\nSchicksalsgegner...")
/*<257>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200><0x30001:0x><heroname>!\nPass auf, dass er mir nicht zu nahe kommt!")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10006:0xfdcd>Halte das Schwert der Göttin himmelwärts...\n<pause 15><0x10006:0xfdcd>Halte es dem Bösen entgegen...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Der <color red<Siegelstein >coloroff>steckt in\nder Stirn des Verbannten!\n\n\n<0x10009:0x0e000013>Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg zeigen!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x004b0000>Nun denn, <0x10012:0x0000000b>Gebieter. Pass gut auf dich auf.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Ich habe dir etwas zu berichten, <0x10012:0x00000001>Gebieter.")
/*<482>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Es scheint, als sei dieses Tor vor Kurzem\ngeöffnet worden. Jetzt aber ist es von einer\nstarken Kraft versiegelt.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 76, line: 86 */ "<0x10009:0x00000026>Gut gemacht, <heroname>!\nAber ohne mich hättest du's sicher\nnicht geschafft.\n\nUnd jetzt lass uns endlich dieses Zeitportal\nöffnen! Ich gehe schon mal vor...")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDer <color red<Siegelstein>coloroff> steckt in der Stirn des Verbannten.\n\n\nDu kannst nicht fliehen, ehe du diese Bestie\nbesiegt hast...")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDu, <0x10012:0x00000002>Gebieter, musst den Verbannten jetzt\nin seine Schranken verweisen.\n\nDu kannst jetzt nicht fliehen.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDer <color red<Siegelstein>coloroff> steckt in der Stirn des Verbannten.\n\n\nDu kannst nicht fliehen, ehe du diese Bestie\nbesiegt hast...")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>Aaargh!\n\n\n\n<0x10009:0x00004000>Was ist das?!?\nDas Beben hat den Weg verschüttet!\nIch komme hier nicht weiter!\nWas tun wir jetzt nur?\n<0x10008:0x01cd>!!!")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 0, unk: 2, line: 67 */ "<0x10009:0x00131907>Was hast du da getan!\nDas ist ja unglaublich!\n\n\n<0x10009:0x00171b08>Die Statue hat geleuchtet, als du dich ihr\ngenähert hast. Du bist wirklich einmalig!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>Gut gezielt, aber etwas zu spät geschossen!\n\n\n\n<0x10009:0x00004000>Ich lege dann mal das nächste Geschoss ein.\nSag mir Bescheid, wenn es losgehen soll!")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 76, unk: 1, line: 88 */ "<0x10009:0x00203010>Puh... <heroname>...\nDas war wirklich knapp! Da haben\nwir noch mal Glück gehabt...\n\n<0x10009:0x00420200>Ich gehe gleich zum Tempel!\nBeeil dich und komm nach!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x003e4026><0x30001:0x><heroname>!\nSteig zum Tempel hoch und komm\ndann schnell <color red<hierher>coloroff>!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0020403c>Gut, du bist auf dem <color blue<Katapult>coloroff>! Ziele auf\nden Siegelstein auf seinem Kopf!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "Hey, <heroname>! Gibt's das denn?\nDieser Kerl ist schon wieder zurück!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Einen Moment! Ich bringe mich\nschnell in Stellung...")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hey! <0x30001:0x><heroname>!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Sieh dir das an!\nDas ist meine mächtige Geheimwaffe!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Mein <color red<mächtiges Katapult>coloroff>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Da fällt dir nichts mehr ein, was?\nIch muss gestehen, ich habe mich dafür\nauch mächtig ins Zeug gelegt...")
/*<361>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Schau gut hin!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>Die ganzen Schienen rund um diese\nGrube habe ich ganz alleine gelegt.\nKlasse, was?\n\nIch bin selbst ganz begeistert von mir!<pause 30>\nWusste gar nicht, dass ich so vielseitig\nbegabt bin...\n\n<0x10009:0x28414000>Jetzt gilt es nur noch, das Katapult in\nStellung zu bringen und dem Kerl eine\nordentliche Ladung zu verpassen!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Mit so ein paar Bomben sollten wir\nselbst einen Koloss wie ihn für kurze\nZeit außer Gefecht setzen können!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Aber ein wenig zu früh kommt er mir schon...")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>Ich muss hier noch ein paar kleine\nVorbereitungen treffen, um das\nKatapult bewegen zu können.\n\nIch melde mich, wenn ich so weit bin!\nBis dahin bist du ganz auf dich allein gestellt.")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 0, unk: 11, line: 128 */ "<0x10012:0x0000000b>Gebieter, du musst den Verbannten <0x10012:0x00000002>besiegen.\n\n\n\nDu kannst jetzt nicht fliehen.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hey! <0x30001:0x><heroname>!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Sieh dir das an!\nDas ist meine mächtige Geheimwaffe!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Mein <color red<mächtiges Katapult>coloroff>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Da fällt dir nichts mehr ein, was?\nIch muss gestehen, ich habe mich dafür\nauch mächtig ins Zeug gelegt...")
/*<363>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Schau gut hin!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>Die ganzen Schienen rund um diese\nGrube habe ich ganz alleine gelegt.\nKlasse, was?\n\nIch bin selbst ganz begeistert von mir!<pause 30>\nWusste gar nicht, dass ich so vielseitig\nbegabt bin...\n\n<0x10009:0x28414000>Jetzt gilt es nur noch, das Katapult in\nStellung zu bringen und dem Kerl eine\nordentliche Ladung zu verpassen!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Mit so ein paar Bomben sollten wir\nselbst einen Koloss wie ihn für kurze\nZeit außer Gefecht setzen können!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Aber ein wenig zu früh kommt er mir schon...")
/*<252>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>Ich muss hier noch ein paar kleine\nVorbereitungen treffen, um das\nKatapult bewegen zu können.\n\nIch melde mich, wenn ich so weit bin!\nBis dahin bist du ganz auf dich allein gestellt.")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 2, unk: 0, line: 60 */ "<0x10009:0x00171b08>Die Statue, sie leuchtet!\nWoher wusstest du, wie man das macht?")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>Hargh!")
/*<357>*/ 		printf(/* textboxtype: 0, unk: 6, line: 59 */ "<0x10009:0x00131909>Heiliger Kiesel!\n\n\n\n<0x10009:0x00171b08>Was hast du da getan? Die Statue, sie leuchtet!\nWoher wusstest du, wie man das macht?")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>Was ist das?!? Dieses Mal sind ihm\nHände gewachsen!\n\n\nDie perfekte Gelegenheit, dir meine\nErfindung zu demonstrieren...\n\n\n<0x10009:0x00424000>Ich bereite alles vor und geb dir\nBescheid, wenn ich bereit bin!\nKämpf du solange mit ihm oder so...")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 6, unk: 1, line: 43 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDer Verbannte ist wiedererwacht.\nDu kannst jetzt nicht fliehen.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 0, unk: 6, line: 44 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDu, <0x10012:0x00000002>Gebieter, musst den Verbannten jetzt\nin seine Schranken verweisen.\n\nDu kannst jetzt nicht fliehen.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 6, unk: 1, line: 43 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDer Verbannte ist wiedererwacht.\nDu kannst jetzt nicht fliehen.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	wait_frames(45)
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	wait_frames(30)
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>Oh-oh, gleich geht es los...<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>Keine Panik!\n\n\n\n<0x10009:0x28410000>Du kennst ja mein <color red<mächtiges Katapult >coloroff>bereits...")
/*<237>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>Solange wir das haben, kann uns dieser\nKoloss keine Angst einjagen!\n\n\n<0x10009:0x28000200>Dieser Kerl ist wirklich mein\nSchicksalsgegner...")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200><0x30001:0x><heroname>!\nPass auf, dass er mir nicht zu nahe kommt!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026>Hey, <heroname>! Ich habe alle meine\nBomben aufgebraucht!\n\n\n<0x10009:0x00204000>Jetzt bleibt nur eins, <heroname>.\nDu musst dich direkt auf seinen Kopf\nschleudern! Beeil dich, das ist der einzige Weg!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Du kannst jederzeit auf mein\n<color red<mächtiges Katapult >coloroff>zurückgreifen!\n\n\nDrück einfach <icon 30>, um das Katapult\nzum Feuern vorzubereiten!<0x10011:0x10cd>\n\n\nMithilfe von (ControlStick) bewegst du es und\nnimmst den Feind ins Visier.\nUnd dann auf ihn!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Ein weiteres Mal wird mein <color red<mächtiges\nKatapult >coloroff>gebraucht!\n\n\nDu weißt ja schon, dass du es durch\nDrücken von <icon 30> vorbereiten kannst!<0x10011:0x10cd>\n\n\n<0x10009:0x00424000>Lass uns unsere Attacken koordinieren\nund den Kerl endlich kleinmachen!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Du kannst jederzeit auf mein\n<color red<mächtiges Katapult >coloroff>zurückgreifen!\n\n\nDrück einfach <icon 30>, um das Katapult\nzum Feuern vorzubereiten!<0x10011:0x10cd>\n\n\nMithilfe von (ControlStick) bewegst du es und\nnimmst den Feind ins Visier.\nUnd dann auf ihn!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>Jetzt kann ich endlich mein\n<color red<mächtiges Katapult >coloroff>ausprobieren!\n<0x10009:0x00000300>Wenn ich so weit bin, werde\nich dir über <icon 30> ein Zeichen geben.\n<0x10009:0x00004000>Bis dahin muss es dein Schwert richten!<0x10011:0x10cd>")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf(/* textboxtype: 76, unk: 1, line: 100 */ "<0x10009:0x00000026>Wo kann ich dich hinschießen?\nWo möchtest du spielen?\n\n[1-]Wolkenmeer[2-]Erdland[3]Ich bleibe\nhier.")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 0, unk: 76, line: 101 */ "Das Wolkenmeer also.\nUnd was genau willst du spielen?\n\n[1-]Roulette[2-]Insektenparadies[3-]Was Anderes.")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 2, line: 105 */ "<0x10009:0x00420342>Auf geht's! Halt dich fest!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 0, line: 102 */ "Willst du vielleicht etwas hiervon spielen?\n\n[1-]Bambusfäller[2-]Kürbisschießen[3]Nichts")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf(/* textboxtype: 11, unk: 1, line: 106 */ "Na, dann sag mir Bescheid, wenn du\nirgendwohin willst!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 6, unk: 1, line: 103 */ "Das Wolkenmeer also.\nUnd was genau willst du spielen?\n[1-]Roulette[2-]Insektenparadies[3-]Bambusfäller[4]Nichts")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf(/* textboxtype: 0, unk: 6, line: 104 */ "Das Erdland also. Und was genau willst\ndu spielen?\n\n\n[1-]Heldenprüfung[2-]Rubinjagd[3-]Loren-Lenken[4]Nichts")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf(/* textboxtype: 2, unk: 11, line: 107 */ "<0x10009:0x00000004>Hey, <heroname>!\n\n\nIch werde dir helfen!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 0, unk: 76, line: 98 */ "Mit diesem Katapult kann ich dich an\nverschiedene Orte schießen!")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "Es macht Spaß, dich irgendwo hin zu schießen!\nHast du Lust auf eine kleine Flugeinlage nach\nBado-Art?\n\nDu solltest dich jedenfalls an Orten, an denen\ndu noch nicht warst, etwas genauer umsehen!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 76, unk: 1, line: 97 */ "<0x10009:0x00000004>Hey, <heroname>!\nMit diesem Katapult kann ich dich an\nverschiedene Orte schießen!")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Du willst in den Wald von Phirone?\n\n\n\nIch kann dich mit meinem <color red<mächtigen\nKatapult>coloroff> direkt hinschießen!\n[1-]Bitte![2]Keine Lust.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 0, unk: 76, line: 92 */ "<0x10009:0x00000042>Na, dann lass mich mal machen!")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 76, unk: 1, line: 91 */ "Sag mir einfach, wenn du es doch\nversuchen willst!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 0, unk: 76, line: 89 */ "<0x10009:0x00000026>Na, wie habe ich das wieder gemacht?\nJetzt musst du nur noch das Siegel schließen...")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026>Hey, <heroname>! Ich habe alle meine\nBomben aufgebraucht!\n\n\n<0x10009:0x00204000>Jetzt bleibt nur eins, <heroname>.\nDu musst dich direkt auf seinen Kopf\nschleudern! Beeil dich, das ist der einzige Weg!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Du kannst jederzeit auf mein\n<color red<mächtiges Katapult >coloroff>zurückgreifen!\n\n\nDrück einfach <icon 30>, um das Katapult\nzum Feuern vorzubereiten!<0x10011:0x10cd>\n\n\nMithilfe von (ControlStick) bewegst du es und\nnimmst den Feind ins Visier.\nUnd dann auf ihn!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Ein weiteres Mal wird mein <color red<mächtiges\nKatapult >coloroff>gebraucht!\n\n\nDu weißt ja schon, dass du es durch\nDrücken von <icon 30> vorbereiten kannst!<0x10011:0x10cd>\n\n\n<0x10009:0x00424000>Lass uns unsere Attacken koordinieren\nund den Kerl endlich kleinmachen!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>Das habe ich gut gemacht!<pause 30> Und jetzt musst du\ndas Siegel verschließen!\n\n\nBeim letzten Mal hast du den Stein mit dem\nStrahl deines Schwertes beschossen, richtig?")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Du kannst jederzeit auf mein\n<color red<mächtiges Katapult >coloroff>zurückgreifen!\n\n\nDrück einfach <icon 30>, um das Katapult\nzum Feuern vorzubereiten!<0x10011:0x10cd>\n\n\nMithilfe von (ControlStick) bewegst du es und\nnimmst den Feind ins Visier.\nUnd dann auf ihn!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>Jetzt kann ich endlich mein\n<color red<mächtiges Katapult >coloroff>ausprobieren!\n<0x10009:0x00000300>Wenn ich so weit bin, werde\nich dir über <icon 30> ein Zeichen geben.\n<0x10009:0x00004000>Bis dahin muss es dein Schwert richten!<0x10011:0x10cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 77 */ "<0x10009:0x00000026>Das Mütterchen hat gesagt, dass dieses\nUngeheuer schon bald wieder\nzurückkehren könnte...\n\n<0x10009:0x00004200>Dieses Mal bin ich vorbereitet, denn ich\nbastle gerade an einer phänomenalen\nGeheimwaffe!\n\n<0x10009:0x0000000f>Noch ist sie nicht fertig, aber ich freue\nmich bereits darauf, es dem Ungeheuer\ndamit zu zeigen!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000026>Da ist er schon wieder!\nDer Kerl ist nicht kleinzukriegen...\n\n\n<0x10009:0x00044000><0x30001:0x><heroname>!\nWir machen es einfach wie beim letzten\nMal, was?")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "Hey, <heroname>! Gibt's das denn?\nDieser Kerl ist schon wieder zurück!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Einen Moment! Ich bringe mich\nschnell in Stellung...")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Der <color red<Siegelstein >coloroff>steckt in\nder Stirn des Verbannten!\n\n\n<0x10009:0x0e000013>Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg zeigen!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Los! <0x30001:0x><heroname>!<pause 30>\n\n\n\nLenke den <color red<Himmelsstrahl >coloroff>auf den Siegelstein!\n\n\n\n<0x10009:0x00111700>Schnell!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Der <color red<Siegelstein >coloroff>steckt in\nder Stirn des Verbannten!\n\n\n<0x10009:0x0e000013>Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg zeigen!")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>!\nDu musst sofort zum <color red<Siegelstein >coloroff>in der\nMitte des Siegelhains!\n\n<0x10009:0x00140b00>Dies ist kein gewöhnliches Beben!\nDas Böse, es wird wieder erwachen...")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	wait_frames(60)
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>Was ist das?\nDie Erde... sie bebt?!?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>Aaah!\nEin... Erdbeben?!?")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010><0x30001:0x><heroname>!\nSchnell, zum <color red<Siegelstein >coloroff>in der Mitte des Hains!")
/*<284>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>Wer weiß, wann das Böse erwacht?\nDu musst dich beeilen!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Er hat das Siegel gebrochen!\n\n\n\nIch erzähle dir später mehr darüber.\n\n\n\nJetzt musst du erst dafür sorgen, dass er nicht\naus seinem Loch entkommen kann.\n\n\nEr darf den Tempel nicht erreichen!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Böse in seine Schranken\nverweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Weißt du, wie man das Siegel verschließt?\n\n\n\nStelle dich vor den Stein und lenke den\n<color red<Himmelsstrahl>coloroff> auf ihn!<pause 30>\nIch weiß, dass du es kannst...")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Böse in seine Schranken\nverweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 0, unk: 1, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>Was?!?\n<pause 10>Jetzt fliegt er auch noch!\n\n\n<0x10009:0x00424026>Ich glaube, er will direkt zum Tempel!\n<pause 8>Los, holen wir den Kerl vom Himmel!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nIch spüre eine Veränderung an diesem Ort, die durch\nden Himmelsstrahl hervorgerufen wurde.")
/*<495>*/ 	printf(/* textboxtype: 11, unk: 1, line: 124 */ "Gebieter, <0x10012:0x00000002>ich spüre hier eine ähnliche Aura wie\ndie deines Paraschals. Es ist Zeldas Aura.\n\n\nIch kann <0x10012:0x00000002>dich mit meiner <sound 4><color red<Aurasuche >coloroff>in diese\nRichtung führen.\n\n\nWünschst du weitere Erklärungen hierzu?\n[1-]Bitte[2]Nein")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 0, unk: 11, line: 125 */ "<0x10012:0x00000005>Sehr wohl, Gebieter.\n\n\n\nMit der Aurasuche kann ich Dinge, die du suchst,\nerspüren, <0x10012:0x0000000c>Gebieter.\n\n\nJe näher sich das Ziel befindet, desto <color red<stärker meine\nReaktion>coloroff>. Außerdem ändert sich der Signalton.\n\n\nZudem erscheint auf dem Zeiger ein <color red<Pfeil>coloroff>,\nder die ungefähre Richtung, in der sich das\nZiel befindet, angibt.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 1, unk: 0, line: 126 */ "Nun halte (^) gedrückt, stelle Zelda als Ziel deiner\nSuche ein und weise mir eine Richtung.<0x10011:0x08cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 11, unk: 1, line: 127 */ "Ja, Gebieter.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Der <color red<Siegelstein >coloroff>steckt in\nder Stirn des Verbannten!\n\n\n<0x10009:0x0e000013>Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg zeigen!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Los! <0x30001:0x><heroname>!<pause 30>\n\n\n\nLenke den <color red<Himmelsstrahl >coloroff>auf den Siegelstein!\n\n\n\n<0x10009:0x00111700>Schnell!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Der <color red<Siegelstein >coloroff>steckt in\nder Stirn des Verbannten!\n\n\n<0x10009:0x0e000013>Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg zeigen!")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>!\nDu musst sofort zum <color red<Siegelstein >coloroff>in der\nMitte des Siegelhains!\n\n<0x10009:0x00140b00>Dies ist kein gewöhnliches Beben!\nDas Böse, es wird wieder erwachen...")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Böse in seine Schranken\nverweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Weißt du, wie man das Siegel verschließt?\n\n\n\nStelle dich vor den Stein und lenke den\n<color red<Himmelsstrahl>coloroff> auf ihn!<pause 30>\nIch weiß, dass du es kannst...")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Böse in seine Schranken\nverweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>Wuah, das war knapp! Mein Katapult\nhat mal wieder seinen Zweck erfüllt.\n\n\nUnd jetzt auf ihn! Beeil dich!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nDurch Drücken von (Z) kannst du Objekte oder\nPersonen <color green<anvisieren>coloroff>, und ich kann dir dann berichten,\nwelche Informationen ich über sie habe.<0x10011:0x07cd>\n\nRufe mich, indem du (v) drückst, während du etwas\nmithilfe von (Z) <color red<anvisiert hast>coloroff>.<0x10011:0x09cd><0x10011:0x07cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>Aaaaah!!!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000030>Aaah... Ich... Jetzt mach schon, was die alte\nFrau dir gesagt hat!\n\n\nTriff den Stein mit dem Strahl aus deinem\nSchwert oder so, das meinte sie doch?!?")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>Aaaaah!!!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000015>Wa... Was ist das?\nAlles wackelt?!?\n\n\nDie Erde, sie bewegt sich!\nWas zum...")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000026>Hey! <0x30001:0x><heroname>!\nMein Katapult ist bereit!\n\n\nWenn du meine Hilfe brauchst, dann rufe\nmich einfach durch Drücken von <icon 30>!<0x10011:0x10cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00040202>Schau her, <heroname>!<pause 30>\nIch werde Zelda auf meine Weise unterstützen!")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000002>Ach, <heroname>?\nWeißt du, ich habe etwas nachgedacht.\n\n\nVielleicht hat die Alte doch nicht ganz\nso Unrecht. Ich bin einfach kein so\ngroßer Held wie du...\n\n<0x10009:0x00404200>Ich habe mich entschlossen,\nZelda auf meine Weise zu unterstützen.\nSieh her!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Wie... <pause 30>Was...<pause 30>\nIch bin einfach zu nichts zu gebrauchen<pause 30>!<pause 30>!<pause 30>!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>Aaaargh!\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>Nichts habe ich tun können!\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>Einfach gar nichts!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "Besiege den Verbannten, <0x10012:0x00000001>Gebieter.\nFlucht ist keine Option.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDu, <0x10012:0x00000002>Gebieter, musst den Verbannten jetzt\nin seine Schranken verweisen.\n\nDu kannst jetzt nicht fliehen.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "Besiege den Verbannten, <0x10012:0x00000001>Gebieter.\nFlucht ist keine Option.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	wait_frames(30)
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "Hey, <heroname>! Gibt's das denn?\nDieser Kerl ist schon wieder zurück!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Einen Moment! Ich bringe mich\nschnell in Stellung...")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000026>Ab in den Wald von Phirone!<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 76, unk: 1, line: 94 */ "Auf geht's!<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder verschließen!\n\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Das Siegel ist ein weiteres Mal gebrochen...\n\n\n\nDu weißt, was du nun tun musst.\nGib nicht auf, ich weiß, dass du es\nschaffen wirst!")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder verschließen!\n\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "So! Jetzt bin ich dran!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "Bewege das Katapult mithilfe von (ControlStick)\nund visiere den Feind an!\n\n\nDurch Drücken von <icon 41> schießt du die\nBomben ab. Greif ihn an, wenn er dann\nbenommen ist.")
/*<412>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "Wenn du dir mit der Bedienung des\n<color blue<Katapults>coloroff> nicht sicher bist, drücke\neinfach <icon 19>, um nachzusehen!<0x10011:0x0bcd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Was sagst du da, <heroname>?\n\n\n\nDu meinst also, dass die alte Frau in dem\n<color red<Tempel>coloroff> dort weiß, wo sich <color blue<Zelda >coloroff>aufhält?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "Hm...\nAlles klar, <heroname>!\nDu hast deinen bescheidenen Beitrag geleistet.\n\nJetzt bin ich dran!\n\n\n\n<0x10009:0x000d0b41>Von jetzt ab werde ich mich persönlich um\ndie Rettung <color blue<Zeldas>coloroff> kümmern!")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Ich werde sie retten und mit ihr in den\nWolkenhort zurückkehren.<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0000000c>Ich werde um <color blue<Zeldas>coloroff> Hand anhalten,\nsie wird Ja sagen, und wir werden für\nimmer glücklich sein!")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10009:0x0000000d>Du musst dir also gar keine Hoffnungen\nmehr machen!")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Ich gehe dann gleich mal zu der alten Frau!")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10008:0x01cd>Viel Spaß noch im Leben...<pause 45>\n<0x10008:0xffcd><0x30001:0x><heroname>!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>Aaargh!<pause 15>\n<color red<<0x10006:0x00cd>Das ist... <pause 10><0x10006:0xfecd>das Ende!>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder verschließen!\n\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Das Siegel ist ein weiteres Mal gebrochen...\n\n\n\nDu weißt, was du nun tun musst.\nGib nicht auf, ich weiß, dass du es\nschaffen wirst!")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder verschließen!\n\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	wait_frames(60)
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	wait_frames(30)
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	wait_frames(15)
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>Was ist das?\nDie Erde... sie bebt?!?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>Aaah!\nEin... Erdbeben?!?")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010><0x30001:0x><heroname>!\nSchnell, zum <color red<Siegelstein >coloroff>in der Mitte des Hains!")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>Wer weiß, wann das Böse erwacht?\nDu musst dich beeilen!")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00424300>Na, wie gefällt dir mein kleines Spielzeug?\nDa machst du Augen, was? Das hättest du\nmir nicht zugetraut, oder?\n\n<0x10009:0x003e4000>Ich lege schon mal das nächste Geschoss ein.\nSag mir Bescheid, wenn es losgehen soll!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "Dieses Wesen, das dort angegriffen wird, kann dir\nvielleicht behilflich sein. Ich empfehle dir, ihm zu\nHilfe zu eilen.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000026>Hey! <0x30001:0x><heroname>!\nMein Katapult ist bereit!\n\n\nWenn dieses Vieh die Wände hochklettern will,\nkönnen wir ihm damit eine Ladung verpassen!\n\n\nWenn du meine Hilfe brauchst, dann rufe mich\neinfach durch Drücken von <icon 30>!<0x10011:0x10cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "<0x10012:0x00000001>Gebieter, wenn du den <color blue<Paraschal>coloroff> nicht vor der\nLandung öffnest, kann das sehr ernste Folgen\nfür dich haben.\n\nDieses Mal habe ich dir geholfen, aber vergiss nicht,\n<0x10012:0x00000002>Gebieter, beim nächsten Mal <icon 41> zu drücken.<0x10011:0x0fcd>")
          }

