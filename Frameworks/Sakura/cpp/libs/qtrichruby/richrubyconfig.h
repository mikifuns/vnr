#ifndef RICHRUBYCONFIG_H
#define RICHRUBYCONFIG_H

#ifdef QT_GUI_LIB
# define RICHRUBY_GUI_LIB
#endif // QT_GUI_LIB

#define RICHRUBY_OPEN_MARK   "[ruby="
#define RICHRUBY_SPLIT_MARK  "]"
#define RICHRUBY_CLOSE_MARK  "[/ruby]"

#define RICHRUBY_PLAINTEXT_FORMAT "%1(%2)"

#endif // RICHRUBYCONFIG_H