void entrypoint_006_800() {
	start()
	printf("Current Session Play Time: ########################################\n#####Total Play Time: #############################################\nNo further information.")
}

void entrypoint_006_801() {
	start()
	printf("#####\nYou called for me, Master?\n############################################")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 0)])) {
	  case 0:
		printf("#####\nYes, Master. What information do\nyou seek?\n############################################")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 4)])) {
		  case 0:
			flw_8:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', -1), ('param3', 7)])
		  case 1:
			goto flw_8
		  case 2:
			goto flw_8
		  case 3:
		}
	  case 1:
		flw_5:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', -1), ('param3', 7)])
	  case 2:
		goto flw_5
	  case 3:
	}
}

