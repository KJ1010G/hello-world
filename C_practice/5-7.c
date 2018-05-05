int readlines(char *lineptr[], int maxlines, char kjlines[], int kj)
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0){
		if (nlines >= maxlines || kj+len>=MAX){
			return -1;
		}
		else {
			line[len-1] = '\0'; /* delete newline */
			strcpy(kj, line);
			lineptr[nlines++] = kj;
			kj+=len;
		}
	}
	return nlines;
}
