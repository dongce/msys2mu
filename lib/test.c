
#include <gmime/gmime.h>

static GMimeStream*
get_mime_stream (const char *path)
{
	FILE *file;
	GMimeStream *stream;

	file = fopen (path, "r");
	if (!file) {
		return NULL;
	}

	stream = g_mime_stream_file_new (file);
	if (!stream) {
		fclose (file);
		return NULL;
	}

	return stream;
}

static char*
cleanup_maybe (const char *str, gboolean *do_free)
{
	char *s;

	if (!str)
		return NULL;


	return s;
}



int main(int argc, char **argv)
{
  
	GMimeStream *stream;
	GMimeParser *parser;
  GMimeMessage*   mime_msg ; 
  const char *subject ;

  g_mime_init(0) ; 

  char** argvv[3] ;
  
	argvv[0] = "c:\\windows\\explorer.exe" ; 
	argvv[1] = "C:\\Users\\dongil\\AppData\\Local\\Temp\\mu-500\\51e5868\\6\\ICUIRST_IP_IRST_IP_IRST_report.xlsx";
	argvv[2] = NULL;
	g_spawn_async_utf8(NULL, (gchar**)argvv, NULL,
			    G_SPAWN_SEARCH_PATH, NULL, NULL, NULL,
			    NULL);

  // stream = get_mime_stream ( "f:\\MYSINGLE20130416\\eaglemail\\cur\\2016-01-25 1750_무제.eml");
	// parser = g_mime_parser_new_with_stream (stream);
	// g_object_unref (stream);
	// if (!parser) {
	// 	return FALSE;
	// }

	// mime_msg = g_mime_parser_construct_message (parser);
  // subject  = g_mime_message_get_subject (mime_msg) ; 

	// FILE *file = fopen("result.txt" , "wb") ;
  // fwrite(subject, 1 , strlen(subject), file) ;
  // fclose(file) ; 
  
  // printf("%s\n" , subject) ; 
}
