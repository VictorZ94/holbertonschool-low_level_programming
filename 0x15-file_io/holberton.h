#ifndef FILE_DESCRIPTOR_H
#define FILE_DESCRIPTOR_H

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
