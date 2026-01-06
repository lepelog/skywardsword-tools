          void entrypoint_102_15() {
/*<183>*/ 	start()
/*<184>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Tu peux consulter les <color red<actions >coloroff>de ton\ncélestrier en appuyant sur (2) en tout\ntemps lorsque tu le chevauches!<0x10011:0x05cd>\n\nAvec (A), tu peux <color red<accélérer >coloroff>ou <color green<attaquer\n>coloroff>et avec (B), tu peux <color red<ralentir>coloroff>. Tu devrais\nessayer. <0x10011:0x01cd>")
          }

          void entrypoint_102_16() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x30001:0x>! Je vais te donner\nun conseil pour <color red<accélérer>coloroff>.\n\n\n<color green<Agite la manette Wii Remote de haut\nen bas >coloroff>et lorsque tu as pris assez\nd'<color red<altitude>coloroff>, <color green<incline‐la vers le bas>coloroff>\npour accélérer!\nAgiter de haut en bas puis incliner\nvers le bas, c'est la base pour\naccélérer! Compris?")
          }

          void entrypoint_102_01() {
          	start()
/*<199>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 26, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x30001:0x><heroname>, je te rejoindrai\nquand mon oiseau aura un peu\nrécupéré.\n\n<0x10009:0x00000500>Va voir si quelqu'un au village\nsait ce qui a bien pu arriver à\nton célestrier.")
          }

          void entrypoint_102_02() {
/*<  2>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 15, 'param3': 32}
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 1, 'next': 78, 'param3': 17}
/*< 78>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Je savais que je te trouverais ici,\n<heroname>...\n\n\n<0x1000A:0x001700cd>Quand on m'a dit que tu étais parti\nà la recherche de ton oiseau près\nde la chute, je suis venue te prêter\nmain-forte.\n\nComment vont tes recherches?\nAs-tu trouvé des pistes?")
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x01000514>Je vois...\n\n\n\n<0x10009:0x01000c00>Il ne faut surtout pas perdre espoir.\nHergo et sa bande se tiennent souvent\nprès d'ici. Peut-être qu'on trouvera des\nindices. Allons voir!")
/*<138>*/ 	set_camera(22, 0)
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 203, 'param3': 24}
/*<203>*/ 	wait_frames(30)
/*<137>*/ 	{'type': 'type3', 'subType': 4, 'param1': 260, 'param2': 528, 'next': 135, 'param3': 13}
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10006:0xfccd>...?<0x10006:0x00cd>")
/*<170>*/ 	set_camera(25, 0)
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x01001500>Qui est là...?\n\n\n\n<0x10009:0x01001500>J'entends quelqu'un qui m'appelle...")
/*<139>*/ 	set_camera(24, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 4, 'param1': 268, 'param2': 5376, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Ah<pause 20>... Excuse‐moi, <heroname>.\nJ'étais dans la lune... Bien, allons‐y!")
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
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ah! Le voilà!")
/*< 21>*/ 	set_camera(2, 0)
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00090500><0x10008:0x01cd>C'est lui! C'est ton célestrier,\n<heroname>!")
/*< 17>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 18, 'param3': 17}
/*< 18>*/ 	set_camera(3, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_04() {
/*<  6>*/ 	start()
/*< 73>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001514>Ah, tu as raté ton atterrissage.\n\n\n\n<color red<<0x10009:0x00000c00>En chute libre>coloroff>, dirige-toi en <color green<inclinant\n>coloroff>la manette Wii Remote.\n\n\nAllez, essaie encore une fois!\nCette fois je ne te pousserai pas.\nAlors, prends ton courage à deux\nmains et saute quand tu es prêt!\n<color green<Fonce >coloroff>vers le bord pour prendre de\nl'élan et sauter dans le vide!\n\n\nN'oublie pas d'ouvrir ton parachâle\nen appuyant sur (B) avant d'atterrir!<0x10011:0x01cd>\n\n\nTu dois atterrir <color red<au milieu du dallage\ncirculaire >coloroff>en bas!")
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
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000004>On essaie encore, d'accord?\nCette fois je ne te pousserai pas.\nAlors prends ton courage à deux\nmains et SAUTE!\n<color green<Fonce >coloroff>vers le bord pour prendre de\nl'élan et sauter dans le vide!\n\n\nN'oublie pas d'ouvrir ton parachâle\nen appuyant sur (B) avant d'atterrir!<0x10011:0x01cd>\n\n\nTu dois atterrir <color red<au milieu du dallage\ncirculaire >coloroff>en bas!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[26 /* us: 805A9ADA 0x04, jp: 805ACD5A 0x04 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000f0513>Que c'est cruel! Ils l'ont enfermé\nlà-dedans!\n\n\n<0x30001:0x><heroname>!\nFais vite, et retire cette barrière!")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000006>Ne reste pas là, <heroname>!\nAllons vite aider ton célestrier!")
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
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 1, line: 19 */ "<0x10009:0x000c0e09>C'est comme s'il ne lui était rien\narrivé. Ton célestrier est vraiment\nexceptionnel!\n\n<0x10009:0x00000c00>Je vais prévenir mon père.")
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
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 1, line: 20 */ "<0x10009:0x04000004>Ah, bien! Si c'est pas <heroname>!")
/*<146>*/ 	set_camera(9, 0)
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1038, 'param2': 11776, 'next': 145, 'param3': 13}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x04000000>J'ai entendu dire que t'as retrouvé\nton poulet... Il était temps.\n\n\n<0x1000A:0x000b00cd>En tous cas, on a pu profiter du temps\nque tu nous as fait poireauter pour bien\nnous entraîner! C'est au moins ça.\n\nJe comprendrai jamais pourquoi\nun flanc-mou comme toi a toujours\ndroit à des traitements de faveur!")
/*< 95>*/ 	set_camera(12, 0)
/*< 96>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12606, 'next': 25, 'param3': 13}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 1, line: 22 */ "T'es pas capable d'aller nulle part\nsans la belle Zelda, on dirait? Tu\nvas faire tout un chevalier, toi! Ha!\n\nJe gage que t'arrives pas à décider\ntoi-même ce que tu manges au\ndéjeuner, hein?\n\n« Zelda, c'est ma meilleure amie\ndepuis qu'on est tout petits! On\nest inséparables! » <0x10006:0xfccd>Bla, bla, bla...<0x10006:0x00cd>\nFranchement, c'en est gênant...\n<0x10009:0x04000017>Mais, toi, t'en es fier, hein?!<pause 60>\n<0x10009:0x040b0aff>On n'avait pas remarqué!")
/*< 65>*/ 	set_camera(13, 0)
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 6, 'next': 48, 'param3': 16}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 23 */ "<0x10009:0x0500000e>Hergo n'arrête pas de parler\nde son avenir avec elle :\n« J'vais épouser Zelda et on\naura beaucoup d'enfants! »\nC'est vrai, hein?")
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 1, line: 24 */ "<0x10009:0x06000014>Héhéhé...")
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 66, 'param3': 17}
/*< 66>*/ 	set_camera(12, 0)
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 1, line: 25 */ "<0x10009:0x040d0b00>Désolé de devoir briser tes rêves\nd'enfant, mais c'est aujourd'hui\nque ça se passe!\n\n<0x10009:0x04000b00>À la cérémonie, la belle Zelda me\nremettra avec joie le <color yellow<parachâle\n>coloroff>parce que c'est moi qui sera le\nvainqueur. C'est clair.\nQuand j'ai su que c'était Zelda\nelle‐même qui l'avait fait, je\nme suis dit qu'il me le fallait\nab-so-lu-ment.")
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 29, 'param3': 17}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 1, line: 26 */ "<0x10009:0x04041700>Le parachâle que Zelda porte sur ses\népaules... À moi, rien qu'à moi...\n\n\nJe gage que c'est à moi qu'elle\npensait quand elle l'a fait.\nHéhéhé...\n\nAprès ma victoire, il y aura la\ncérémonie en haut de la statue de\nla Déesse. Juste nous deux, sans\npersonne pour nous déranger...\nEt ce sera un doux moment pour\nZelda et moi... Ah! Rien que d'y\npenser... Je... euh...")
/*<107>*/ 	set_camera(17, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 5644, 'next': 109, 'param3': 13}
/*<109>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Hu... Huhuhuhu...\nOh, que oui...\n\n\nGnéhéhéhé!")
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 110, 'param3': 50}
/*<110>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1296, 'param2': 3865, 'next': 111, 'param3': 13}
/*<111>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1552, 'param2': 2060, 'next': 67, 'param3': 13}
/*< 67>*/ 	set_camera(18, 0)
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 2, line: 28 */ "Her... Pssst, Hergo!\n<pause 30>Derrière toi! <pause 30>Là, derrière!")
/*< 52>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 31, 'param3': 16}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 1, line: 29 */ "<0x10009:0x04000000><0x1000A:0x000b00cd>Quoi?! Tu ne vois pas que je suis\nen train de... Tais-toi, donc!")
/*< 61>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 0, 'next': 92, 'param3': 15}
/*< 92>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 4, 'next': 97, 'param3': 17}
/*< 97>*/ 	set_camera(14, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x04191715>Oupelaye!!!")
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 6, 'next': 147, 'param3': 16}
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 4103, 'next': 90, 'param3': 13}
/*< 90>*/ 	set_camera(19, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "Je peux savoir ce qu'on fera\nexactement, toi et moi, sans\npersonne pour nous déranger?")
/*< 68>*/ 	set_camera(15, 0)
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 16}
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 1, line: 32 */ "<0x10009:0x04ffff0d>Euh... Héhé... N‐non, rien...\nJe disais ça comme ça.\n\n\n<0x10009:0x04000000><0x30001:0x><heroname>! Je suis content que\nt'aies retrouvé ton oiseau! On va\npouvoir jouer franc-jeu!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 86, 'param3': 17}
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x04000000>À tout à l'heure, Zelda! Et surtout,\nsurveille‐moi bien pendant la course!\nJe vais y mettre le paquet!")
/*< 62>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 4, 'next': 56, 'param3': 14}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 91, 'param3': 16}
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 4, 'next': 98, 'param3': 17}
/*< 98>*/ 	set_camera(18, 0)
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 1, line: 34 */ "<0x10009:0x05050013><0x10009:0x06070000>Heille! Hergo! Attends un peu!<0x10005:0x00140000>")
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1298, 'param2': 4352, 'next': 100, 'param3': 13}
/*<100>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1553, 'param2': 4096, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(0, 5)
/*<115>*/ 	make_actor_do_something(0, 6)
/*<116>*/ 	wait_frames(50)
/*<205>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 206, 'param3': 16}
/*<206>*/ 	wait_frames(5)
/*< 69>*/ 	set_camera(16, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 1, line: 35 */ "<0x10009:0x00091014>« Jouer franc-jeu »? Venant de lui,\nça me fait bien rire!\n\n\n<0x10009:0x0000ff00><0x30001:0x><heroname>! Ne fais pas\nattention à ce qu'il raconte!\nTu dois donner tout ce que tu as!\nJ'ai confiance en toi!\n\nC'est promis?\n[1-]Oui![2-]J'ai des\ndoutes[3-]Rien que toi\net moi...")
/*< 57>*/ 	switch (choice(3)) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x000c0e00>Quelle bonne attitude!\nJe suis sûre que tu vas gagner,\n<heroname>!")
          		flw_101:
/*<101>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': -256, 'next': 207, 'param3': 13}
/*<207>*/ 		make_actor_do_something(0, 0)
/*< 58>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': -1, 'next': 221, 'param3': 16}
/*<221>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 112, 'next': 40, 'param3': 24}
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 2, line: 39 */ "La chevauchée céleste va commencer!\nQue les élèves participants se\nrassemblent ici!")
/*< 59>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 1, line: 40 */ "Ça y est, <heroname>!\nBonne chance!")
/*< 70>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 1, line: 37 */ "<0x10009:0x000c1500>Mais, pourquoi? Fais de ton\nmieux, et tu y arriveras!\nAie confiance en toi!")
          		goto flw_101
          	  case 2:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 1, line: 38 */ "<0x10009:0x00100e04>Ah, non! Tu dois te concentrer!")
          		goto flw_101
          	}
          }

          void entrypoint_102_07() {
/*< 71>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "")
          }

          void entrypoint_102_08() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x30001:0x><heroname>, on devrait donner à\nton célestrier la chance de se remettre\nen douceur en faisant quelques\nmanœuvres toutes simples.")
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Pour diriger ton célestrier, <color green<incline\n>coloroff>la manette Wii Remote dans la\ndirection où tu veux aller.\n\nSi tu veux <color red<accélérer>coloroff>...\n\n\n\n... <color green<agite la manette Wii Remote de haut\nen bas >coloroff>pour prendre de l'<color red<altitude>coloroff>, puis\nincline‐la vers le bas pour piquer.\n\nTu as bien compris? Agiter de haut\nen bas puis incliner vers le bas... ce\nsont les bases de l'accélération!")
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Et puis? Comment se comporte\nton célestrier? Est-ce qu'il vole\nbien malgré sa mésaventure?")
          }

          void entrypoint_102_09() {
/*< 88>*/ 	start()
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "J'étais un peu inquiète mais ton oiseau\nest en pleine forme, <heroname>!\nMon père nous attend. On devrait se \ndépêcher!")
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
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x1000D:0x1906><0x10008:0x01cd><0x30001:0x><heroname>!!!")
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
/*<189>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "Voici le journal de Zelda.\nVoulez‐vous le lire?\n[1-]Bien sûr[2]Ce serait\nmal")
/*<190>*/ 	switch (choice(2)) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Demain aura lieu la <color red<chevauchée\ncéleste>coloroff>. Ce sera une grande étape\npour <heroname> qui\ndeviendra bientôt chevalier.\nJ'ai vraiment hâte de le voir franchir\nce pas. Mais, j'avoue que j'ai quelques\ndoutes sur ses capacités.\n\nCes derniers temps, <heroname>\nnéglige ses entraînements de\nchevauchée d'oiseau. Il a besoin\nd'aide. De mon aide.\nC'est décidé : demain, j'irai le réveiller\naux petites heures pour qu'il aille\ns'entraîner!\n\nIl faut absolument que ce soit lui qui\nl'emporte. C'est avec lui que je veux\naccomplir la cérémonie.")
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Il ne vaut mieux pas...")
          	}
          }

