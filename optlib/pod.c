/*
 * Generated by ./misc/optlib2c from optlib/pod.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"


static void initializePodParser (const langType language CTAGS_ATTR_UNUSED)
{
}

extern parserDefinition* PodParser (void)
{
	static const char *const extensions [] = {
		"pod",
		NULL
	};

	static const char *const aliases [] = {
		NULL
	};

	static const char *const patterns [] = {
		NULL
	};

	static tagRegexTable PodTagRegexTable [] = {
		{"^=head1[ \\t]+(.+)", "\\1",
		"c,chapter,chapters", NULL},
		{"^=head2[ \\t]+(.+)", "\\1",
		"s,section,sections", NULL},
		{"^=head3[ \\t]+(.+)", "\\1",
		"S,subsection,subsections", NULL},
		{"^=head4[ \\t]+(.+)", "\\1",
		"t,subsubsection,subsubsections", NULL},
	};


	parserDefinition* const def = parserNew ("pod");

	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->tagRegexTable = PodTagRegexTable;
	def->tagRegexCount = ARRAY_SIZE(PodTagRegexTable);
	def->initialize    = initializePodParser;

	return def;
}
