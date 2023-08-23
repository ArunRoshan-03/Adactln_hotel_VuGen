TC_02_login()
{
    lr_think_time(33);
    
    /* Correlation comment: Automatic rules - Do not change!
    Original value='Hotel Creek'
    Name ='C_location'
    Type ='Manual' */
    web_reg_save_param_ex(
        "ParamName=C_location",
        "LB/IC=\">",
        "RB/IC=</option>",
        "Ordinal=All",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=Yes",
        "RequestUrl=*/SearchHotel.php*",
        LAST);

    web_submit_data("adactinhotelapp.com_2",
        "Action=https://adactinhotelapp.com/",
        "Method=POST",
        "RecContentType=text/html",
        "Referer=https://adactinhotelapp.com/",
        "Snapshot=t51.inf",
        "Mode=HTML",
        ITEMDATA,
        "Name=username", "Value=ArunRoshan0308", ENDITEM,
        "Name=password", "Value=8546C1", ENDITEM,
        "Name=login", "Value=Login", ENDITEM,
        LAST);
	
    locationCount = lr_paramarr_len("C_location");
    for (index = 1; index <= locationCount; index++) {
        sprintf(paramName, "C_location", index);
         lr_output_message("Parameter Name: %s", paramName);
       	locationValue = lr_eval_string(lr_paramarr_idx(paramName, index));
       	 lr_output_message("%s = %s", paramName, locationValue);
        
        if (strcmp(locationValue, "- Select Hotel -") == 0) {
            fclose(file); // Close the current file
            file = fopen("C:\\Users\\arunroshan.r\\Documents\\VuGen\\Scripts\\Adactin_Hotel\\hotels.dat", "w");
            if (file == NULL) {
                lr_error_message("Failed to open file for writing");
                return -1;
            }
        } else if (strcmp(locationValue, "- Select Location -") == 0) {
            fclose(file); // Close the current file
            file = fopen("C:\\Users\\arunroshan.r\\Documents\\VuGen\\Scripts\\Adactin_Hotel\\locations.dat", "w");
            if (file == NULL) {
                lr_error_message("Failed to open file for writing");
                return -1;
            }
        } else if (strcmp(locationValue, "- Select Room Type -") == 0) {
            fclose(file); // Close the current file
            file = fopen("C:\\Users\\arunroshan.r\\Documents\\VuGen\\Scripts\\Adactin_Hotel\\room_types.dat", "w");
            if (file == NULL) {
                lr_error_message("Failed to open file for writing");
                return -1;
            }
        } else if (strcmp(locationValue, "- Select Number of Rooms -") == 0) {
            fclose(file); // Close the current file
            file = fopen("C:\\Users\\arunroshan.r\\Documents\\VuGen\\Scripts\\Adactin_Hotel\\room.dat", "w");
            if (file == NULL) {
                lr_error_message("Failed to open file for writing");
                return -1;
            }
        } else if (strcmp(locationValue, "- Select Adults per Room -") == 0) {
            fclose(file); // Close the current file
            file = fopen("C:\\Users\\arunroshan.r\\Documents\\VuGen\\Scripts\\Adactin_Hotel\\adults_per_room.dat", "w");
            if (file == NULL) {
                lr_error_message("Failed to open file for writing");
                return -1;
            }
        } else {
            fprintf(file, "%s\n", locationValue); 
        }
    }
    fclose(file);
    return 0;
}
