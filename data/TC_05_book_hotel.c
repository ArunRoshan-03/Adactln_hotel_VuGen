TC_05_book_hotel()
{

	lr_think_time(105);

	web_submit_data("BookingConfirm.php", 
		"Action=https://adactinhotelapp.com/BookingConfirm.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/BookHotel.php", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=first_name", "Value=Arun", ENDITEM, 
		"Name=last_name", "Value=Roshan", ENDITEM, 
		"Name=address", "Value=88 new street cantonment oothakadai\r\ntrichy  ", ENDITEM, 
		"Name=cc_num", "Value=1234567890987654", ENDITEM, 
		"Name=cc_type", "Value=MAST", ENDITEM, 
		"Name=cc_exp_month", "Value=10", ENDITEM, 
		"Name=cc_exp_year", "Value=2026", ENDITEM, 
		"Name=cc_cvv", "Value=123", ENDITEM, 
		"Name=hotel_name_hid", "Value=Hotel Creek", ENDITEM, 
		"Name=location_name_hid", "Value=Sydney", ENDITEM, 
		"Name=room_types_hid", "Value=Double", ENDITEM, 
		"Name=rooms_no_hid", "Value=8", ENDITEM, 
		"Name=arr_date_hid", "Value=23/08/2023", ENDITEM, 
		"Name=dep_date_hid", "Value=24/08/2023", ENDITEM, 
		"Name=no_days_hid", "Value=1", ENDITEM, 
		"Name=adults_room_hid", "Value=2", ENDITEM, 
		"Name=children_room_hid", "Value=2", ENDITEM, 
		"Name=price_night_hid", "Value=AUD $ 225", ENDITEM, 
		"Name=total_price_hid", "Value=AUD $ 235", ENDITEM, 
		"Name=gst_hid", "Value=AUD $ 23.5", ENDITEM, 
		"Name=final_price_hid", "Value=AUD $ 258.5", ENDITEM, 
		LAST);

	lr_think_time(16);

	web_custom_request("ocsp.comodoca.com_3", 
		"URL=http://ocsp.comodoca.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB7O\r\\xC5\\xE7\\xF1R$\\xE6\\xF7\\xBE\\xA3QF1&", 
		LAST);

	web_url("SearchHotel.php", 
		"URL=https://adactinhotelapp.com/SearchHotel.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/BookingConfirm.php", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(15);

	web_custom_request("ocsp.comodoca.com_4", 
		"URL=http://ocsp.comodoca.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xB7O\r\\xC5\\xE7\\xF1R$\\xE6\\xF7\\xBE\\xA3QF1&", 
		LAST);

	web_url("BookedItinerary.php", 
		"URL=https://adactinhotelapp.com/BookedItinerary.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://adactinhotelapp.com/BookingConfirm.php", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
