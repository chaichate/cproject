bool connected_flag = false;
	do
	{
		system("cls");
		printf("FTDI Menu: ");
		printf("1. Quick Connect\n");
		printf("2. Device List\n");
		if (got_list == true) // Only display option if devices list.
		{
		printf("3. Connect Device\n");
		}

		printf("9. Main Menu\n");


		// Get user choice.
		scanf("%s", char_choice);

		// Convert string to int for switch statement.
		int_choice = atoi(char_choice);

		switch (int_choice)
		{
			case 1:
				quick_connect();
				baud_rate = 115200;
				connected_flag = true;
			case 2:
				got_list = get_device_list();
				break;
			case 3:
				if (got_list == true) // Only display option if devices listed.
				{
					connected_flag = connect_device(&baud_rate);
				}
				break;
			case 9:
				main_menu();
			    break;
			default:printf("""Bad choice. Hot glue!""");
			    break;
		}
	}while(int_choice !=99);
}