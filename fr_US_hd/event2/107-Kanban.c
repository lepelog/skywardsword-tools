          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x02\x04\x02\x14CD Statue de la Déesse ")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("Salle de bain")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nGrâce à l'amélioration de votre épée, vous pouvez\ndésormais <r<détecter >>les <y<cristaux de gratitude>>.\n\n\nJ'ai ajouté les <y<cristaux de gratitude >>à la liste des\ncibles à <r<détecter>>. <pling>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf("Je vois que vous avez collecté tous les cristaux de\ngratitude, \x0E\x01\x12\x04\x00\x02Maître. Félicitations.")
          	  case 1:
/*< 64>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nGrâce à l'amélioration de votre épée, vous pouvez\ndésormais <r<détecter >>les <y<cristaux de gratitude>>.\n\n\nJ'ai ajouté les <y<cristaux de gratitude >>à la liste des\ncibles à <r<détecter>>. <pling>Faites\x2010en bon usage.")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf("La soupe de citrouille se\ndéguste bien chaude!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x02\x04\x02\x14CD Grand\x2010place de Célesbourg")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf("Salle d'escrime")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLes célestriers ne volent pas la nuit. Vous devriez\nvous reposer et repartir quand le jour se lèvera.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x02\x04\x02\x14CD École de chevalerie")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nL'<r<entrée de l'épreuve >>qu'ouvre le Chant du héros se\ntrouve sur une de ces îles dans le ciel.\n\n\nUtilisez la <r<fonction détection >>pour trouver son\nemplacement exact.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x08\x02ÍMaison de Panalie\n\x0E\x01\x08\x02\xFFCDGérante de la consigne")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf("Urgent!\nCherche main\x2010d'\x153uvre pour\nlabourer le champ de citrouilles.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Il est interdit de courir\ndans les couloirs!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf("Maison de Jonalie")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf("Toutes mes félicitations, \x0E\x01\x12\x04\x00\x01Maître.\n\n\n\nVous avez réussi toutes les épreuves!")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf("Le <r<joyau des épreuves >>que vous venez d'obtenir est\nen fait un élément d'une paire.\n\n\nQuelque part sur cette île se trouve un joyau identique\nau vôtre, \x0E\x01\x12\x04\x00\x02Maître.\n\n\nEn plaçant votre joyau à l'endroit où la paire sera\ncomplétée, vous pourrez ouvrir le chemin vers la\n<y+<Triforce>>.\n\n\x0E\x01\n\x04\xFFFFÍJe vous conseille de chercher le deuxième joyau.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf("Célesbourg se trouve à\nquelques battements d'ailes\nau nord\x2010ouest d'ici!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf("Maison de Picalia")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf("Prière de monter les célestriers\ndepuis les plates\x2010formes prévues\nà cet effet!")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf("Grida + O...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf("Maison d'Hiron\net d'Orielle")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf("Prière de ranger vos chambres!")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes.\n\n\nCette île figure dans ma mémoire.\n\n\n\nIl s'agit de l'<b<île aux chants>>. Il est probable qu'elle ait\nété bâtie pour vous par la Déesse.\n\n\nCependant, l'entrée de la tour n'est pas accessible.\nJe vous conseille d'examiner les environs.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Fais tourner le piédestal central\npour former le pont qui te\npermettra d'entrer dans la tour\nde l'île aux chants.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf("\x0E\x01\x08\x02ÍMaison de Rupin\n\x0E\x01\x08\x02\xFFCDArmurier")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link. Je confirme qu'une\ndeuxième colonne de lumière est apparue au nord\x2010est.\n\n\nVous pouvez descendre vers de nouvelles terres.\nUne fois que vous serez prêt, je vous conseille de\nvous y rendre.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf("Le bazar est fermé pour la\nnuit. Nous serons heureux\nde vous accueillir dès\ndemain matin.\nSi vous avez un problème\nurgent, venez nous voir dans\nnos résidences respectives.\nLes commerçants du bazar")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Chambre de\nLink")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf("Maison de Kiko")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link. Je confirme qu'une\ntroisième colonne de lumière est apparue au sud\x2010ouest.\n\n\nVous pouvez descendre vers de nouvelles terres.\nUne fois que vous serez prêt, je vous conseille de\nvous y rendre.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf("N'oubliez pas de vous\nlaver les mains!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf("Chambre d'Hergo")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf("\x0E\x01\x08\x02ÍMaison de Caïk\n\x0E\x01\x08\x02\xFFCDDiseur de bonne aventure")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link.\n\n\n\nPour débarrasser le grand Narisha du mal qui l'habite,\nvous devez d'abord maîtriser l'attaque tornade.\n\n\nArfan vous attend à la plate\x2010forme au nord\x2010est de\nCélesbourg, près de la <r<statue d'oiseau en pierre>>.\n\n\nJe vous conseille de vous y rendre au plus vite.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf("Faites le ménage régulièrement!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf("Chambre d'Orbo\net Latruche")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître Link.\n\n\n\n\x0E\x01\n\x04\x0DÍLe coffre que vous voyez là est une relique laissée\npar la Déesse dans les temps anciens pour le héros\nà venir.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf("Une fois que l'énergie d'un <r<cube de la Déesse>> est\nenvoyée dans le ciel, il devrait être possible d'ouvrir\nle coffre correspondant.\n\nChaque cube de la Déesse que vous enverrez dans le\nciel sera une nouvelle aide pour vous, Maître.")
          	  case 1:
/*<171>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître Link.\n\n\n\n\x0E\x01\n\x04\x0DÍLe coffre que vous voyez là est une relique laissée\npar la Déesse dans les temps anciens pour le héros\nà venir.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf("Toutefois, j'ignore comment l'ouvrir. Je n'ai pas\nsuffisamment d'informations à ce sujet.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Parti travailler. Repassez\nme voir la nuit.\n\x0E\x01\x06\x02\x5CD                                 - Beedle")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf("Chambre de Libri")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf("Sous la lumière, joue le chant\ntransmis par la Déesse.\nAlors une lueur se dévoilera\nau héros.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf("Bureau de M. Gaepora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x08\x02ÍMaison de Gondo\n\x0E\x01\x08\x02\xFFCDRénovateur")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf("Chambre d'Arfan")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x08\x02ÍMaison de Darin\n\x0E\x01\x08\x02\xFFCDVendeur de potions")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, ce <r<faisceau vert >>est une\n<b<colonne de lumière >>qui vous permet de traverser\nles nuages.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf("Veuillez consulter votre carte pour connaître votre\nposition par rapport à Célesbourg.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf("Vous pouvez traverser les nuages au pied de cette\ncolonne de lumière.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf("Chambre d'Hulul")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf("Maison de Morcégo")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, je confirme que la stèle que vous avez placée\nhier soir dans la statue de la Déesse a ouvert un\npassage vers la terre.\n\nUne colonne de lumière est apparue dans le ciel,\nau sud. Mon analyse indique que vous pourrez y\ntraverser les nuages.")
/*< 66>*/ 	printf("Si vous allez sur terre muni uniquement d'une épée,\nvos chances de survie sont faibles.\n\n\nSi ce n'est déjà fait, je vous conseille d'acheter des\n<r<potions >>et un <r<bouclier >>au bazar avant de partir.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf("Chambre de Grida")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf("Carte de Célesbourg\nN : Statue de la Déesse,\nO : École, E : Résidences,\nS : Grand\x2010place")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître... J'aperçois une colonne de lumière au loin.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf("Sautez dans le vide en direction de cette colonne de\nlumière et pendant votre chute, sifflez votre célestrier.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf("Veuillez partir à la recherche de dame Zelda. Appuyez\nsur (v) en chute libre pour appeler votre célestrier.\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Chambre de Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf("Notre soupe de citrouille,  \nça bat la soupe aux nouilles!\nSeulement 10 rubis le flacon!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf("Grotte de la chute\nAttention aux Chauves\x2010souris!\nEntrée interdite aux enfants.")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf("Le gagnant de la chevauchée\ncéleste est Link!\nMalheureusement, il y a aussi\nde mauvaises nouvelles...")
          	  case 1:
/*< 38>*/ 		printf("La chevauchée céleste a lieu\naujourd'hui! Soutenez Hergo,\nLink, Latruche et\nOrbo. Que le meilleur gagne!")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00\x04Maître Link, veuillez placer la <r<stèle\n>>que je vous ai remise dans le piédestal.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x12\x04\x00\x04Maître Link, frappez cet emblème\navec l'<r<éclat céleste >>puis placez\x2010y la stèle que je\nvous ai remise.\n\nPour invoquer l'<r<éclat céleste>>, <g<brandissez votre épée\nvers le ciel >>afin d'invoquer le pouvoir des cieux.")
          		  case 1:
/*< 69>*/ 			printf("Mon nom est <b<Fay>>... Placez\x2010vous devant ce socle et\nretirez l'épée qui y est plantée.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf("Récital de Tironne\nReprésentations selon les\ndisponibilités du musicien.")
          	  case 1:
/*<142>*/ 		printf("Récital de Tironne\nEn pause jusqu'à nouvel\nordre. Cherchons musicien.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x02\x04\x02\x16CD École de chevalerie\n    Quartier résidentiel \x0E\x02\x04\x02\x17CD")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link.\n\n\n\nJe détecte dans le ciel l'énergie libérée lorsque vous\navez frappé de l'<r<éclat céleste >>les <r<cubes de la Déesse\n>>dispersés sur terre.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 56, 'param3': 6}
/*< 56>*/ 	printf("Les endroits d'où provient cette énergie sacrée sont\nindiqués sur votre carte.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf("Je vous conseille d'explorer ces régions de la carte.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf("Vous pouvez admirer le fameux\nlustre de la Citrouille perchée\ndepuis le 1\x0E\x03\x00\x00er\x0F\x03\x00 étage.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x02\x04\x02\x14CD Bazar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Toilettes")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Cette pousse mettrait des années à grandir ici.\nJe vous conseille de la planter ailleurs.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf("Pour éviter de faire tomber\nle lustre, prière de ne pas\nse bousculer ici.")
          }

