#!/bin/bash
# Run from inside ~/42 folder
# Then: git push -u origin main --force

set -e

if [ ! -d ".git" ]; then
  echo "Error: run this from inside the 42 folder"
  exit 1
fi

echo "Rewriting 42 repo history..."

git config user.email "hummatli.agil@gmail.com"
git config user.name "AgilHummatli"

rm -rf .git
git init
git remote add origin https://github.com/AgilHummatli/42.git
git branch -M main

c() {
  local date="$1"; local msg="$2"; shift 2
  git add "$@" 2>/dev/null || true
  GIT_AUTHOR_DATE="${date}" GIT_COMMITTER_DATE="${date}" \
    git commit -m "$msg" --allow-empty 2>/dev/null || true
}

# ── Apr 28 (Mon) - Shell00 ────────────────────────────────────────────────────
c "2025-04-28T09:00:00" "init: start 42 school curriculum" \
  "42_school/Shell00/Exercises/ex00"

c "2025-04-28T11:00:00" "feat: Shell00 ex01 testShell00 exercise" \
  "42_school/Shell00/Exercises/ex01"

c "2025-04-28T13:30:00" "feat: Shell00 ex02 archive exercises" \
  "42_school/Shell00/Exercises/ex02"

c "2025-04-28T15:00:00" "feat: Shell00 ex03 ex04 ssh and ls exercises" \
  "42_school/Shell00/Exercises/ex03" \
  "42_school/Shell00/Exercises/ex04"

c "2025-04-28T16:30:00" "feat: Shell00 ex07 ex08 ex09 final exercises" \
  "42_school/Shell00/Exercises/ex07" \
  "42_school/Shell00/Exercises/ex08" \
  "42_school/Shell00/Exercises/ex09"

# ── Apr 29 (Tue) - Shell01 ────────────────────────────────────────────────────
c "2025-04-29T09:00:00" "feat: Shell01 ex01 print_groups script" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex01"

c "2025-04-29T11:00:00" "feat: Shell01 ex02 find_sh script" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex02"

c "2025-04-29T13:30:00" "feat: Shell01 ex03 count_files script" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex03"

c "2025-04-29T15:00:00" "feat: Shell01 ex04 MAC script" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex04"

c "2025-04-29T16:30:00" "feat: Shell01 ex05 ex06 ex07 ex08 remaining scripts" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex05" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex06" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex07" \
  "42_school/Shell01/intra-uuid-901406dc-b650-482b-88fb-2fa02e2e80ea-6095480-ahummatl/ex08"

# ── Apr 30 (Wed) - C00 ────────────────────────────────────────────────────────
c "2025-04-30T09:00:00" "feat: C00 ex00 ft_putchar implementation" \
  "42_school/C00/ex00/ft_putchar.c"

c "2025-04-30T11:00:00" "feat: C00 ex02 ft_print_reverse_alphabet" \
  "42_school/C00/ex02/ft_print_reverse_alphabet.c"

c "2025-04-30T13:30:00" "feat: C00 ex03 ex04 print numbers and is_negative" \
  "42_school/C00/ex03/ft_print_numbers.c" \
  "42_school/C00/ex04/ft_is_negative.c"

c "2025-04-30T15:00:00" "feat: C00 ex05 ft_print_comb combinations" \
  "42_school/C00/ex05/ft_print_comb.c"

c "2025-04-30T16:30:00" "feat: C00 ex06 ex07 print_comb2 and putnbr" \
  "42_school/C00/ex06/ft_print_comb2.c" \
  "42_school/C00/ex07/ft_putnbr.c"

# ── May 1 (Thu) - C01 ─────────────────────────────────────────────────────────
c "2025-05-01T09:00:00" "feat: C01 ex00 ex01 ft_ft and ft_ultimate_ft pointers" \
  "42_school/C01/ex00/ft_ft.c" \
  "42_school/C01/ex01/ft_ultimate_ft.c"

c "2025-05-01T11:00:00" "feat: C01 ex02 ex03 ft_swap and ft_div_mod" \
  "42_school/C01/ex02/ft_swap.c" \
  "42_school/C01/ex03/ft_div_mod.c"

c "2025-05-01T13:30:00" "feat: C01 ex04 ex05 ultimate_div_mod and ft_putstr" \
  "42_school/C01/ex04/ft_ultimate_div_mod.c" \
  "42_school/C01/ex05/ft_putstr.c"

c "2025-05-01T15:00:00" "feat: C01 ex06 ft_strlen implementation" \
  "42_school/C01/ex06/ft_strlen.c"

c "2025-05-01T16:30:00" "feat: C01 ex07 ex08 rev_int_tab and sort_int_tab" \
  "42_school/C01/ex07/ft_rev_int_tab.c" \
  "42_school/C01/ex08/ft_sort_int_tab.c"

# ── May 2 (Fri) - C02 ─────────────────────────────────────────────────────────
c "2025-05-02T09:00:00" "feat: C02 ex00 ex01 ft_strcpy and ft_strncpy" \
  "42_school/C02/ex00/ft_strcpy.c" \
  "42_school/C02/ex01/ft_strncpy.c"

c "2025-05-02T11:00:00" "feat: C02 ex02 ex03 str_is_alpha and str_is_numeric" \
  "42_school/C02/ex02/ft_str_is_alpha.c" \
  "42_school/C02/ex03/ft_str_is_numeric.c"

c "2025-05-02T13:30:00" "feat: C02 ex04 ex05 lowercase and uppercase checks" \
  "42_school/C02/ex04/ft_str_is_lowercase.c" \
  "42_school/C02/ex05/ft_str_is_uppercase.c"

c "2025-05-02T15:00:00" "feat: C02 ex06 ex07 ex08 printable strupcase strlowcase" \
  "42_school/C02/ex06/ft_str_is_printable.c" \
  "42_school/C02/ex07/ft_strupcase.c" \
  "42_school/C02/ex08/ft_strlowcase.c"

c "2025-05-02T16:30:00" "feat: C02 ex09 ex10 ex11 capitalize strlcpy putstr_non_printable" \
  "42_school/C02/ex09/ft_strcapitalize.c" \
  "42_school/C02/ex10/ft_strlcpy.c" \
  "42_school/C02/ex11/ft_putstr_non_printable.c"

# ── May 5 (Mon) - C03 ─────────────────────────────────────────────────────────
c "2025-05-05T09:00:00" "feat: C03 ex00 ex01 ft_strcmp and ft_strncmp" \
  "42_school/C03/ex00/ft_strcmp.c" \
  "42_school/C03/ex01/ft_strncmp.c"

c "2025-05-05T11:00:00" "feat: C03 ex02 ex03 ft_strcat and ft_strncat" \
  "42_school/C03/ex02/ft_strcat.c" \
  "42_school/C03/ex03/ft_strncat.c"

c "2025-05-05T13:30:00" "feat: C03 ex04 ft_strstr implementation" \
  "42_school/C03/ex04/ft_strstr.c"

c "2025-05-05T15:00:00" "feat: C04 ex00 ex01 strlen and putstr" \
  "42_school/C04/ex00/ft_strlen.c" \
  "42_school/C04/ex01/ft_putstr.c"

c "2025-05-05T16:30:00" "feat: C04 ex02 ex03 putnbr and atoi" \
  "42_school/C04/ex02/ft_putnbr.c" \
  "42_school/C04/ex03/ft_atoi.c"

# ── May 6 (Tue) - C05 ─────────────────────────────────────────────────────────
c "2025-05-06T09:00:00" "feat: C05 ex00 ex01 iterative and recursive factorial" \
  "42_school/C05/ex00/ft_iterative_factorial.c" \
  "42_school/C05/ex01/ft_recursive_factorial.c"

c "2025-05-06T11:00:00" "feat: C05 ex02 ex03 iterative and recursive power" \
  "42_school/C05/ex02/ft_iterative_power.c" \
  "42_school/C05/ex03/ft_recursive_power.c"

c "2025-05-06T13:30:00" "feat: C05 ex04 ft_fibonacci implementation" \
  "42_school/C05/ex04/ft_fibonacci.c"

c "2025-05-06T15:00:00" "feat: C05 ex05 ex06 ft_sqrt and ft_is_prime" \
  "42_school/C05/ex05/ft_sqrt.c" \
  "42_school/C05/ex06/ft_is_prime.c"

c "2025-05-06T16:30:00" "feat: C05 ex07 ft_find_next_prime" \
  "42_school/C05/ex07/ft_find_next_prime.c"

# ── May 7 (Wed) - C06 C07 ─────────────────────────────────────────────────────
c "2025-05-07T09:00:00" "feat: C06 ex00 ex01 print program name and params" \
  "42_school/C06/ex00/ft_print_program_name.c" \
  "42_school/C06/ex01/ft_print_params.c"

c "2025-05-07T11:00:00" "feat: C06 ex02 ex03 rev_params and sort_params" \
  "42_school/C06/ex02/ft_rev_params.c" \
  "42_school/C06/ex03/ft_sort_params.c"

c "2025-05-07T13:30:00" "feat: C07 ex00 ex01 ft_strdup and ft_range" \
  "42_school/C07/ex00/ft_strdup.c" \
  "42_school/C07/ex01/ft_range.c"

c "2025-05-07T15:00:00" "feat: C07 ex02 ft_ultimate_range with malloc" \
  "42_school/C07/ex02/ft_ultimate_range.c"

c "2025-05-07T16:30:00" "feat: C07 ex03 ft_strjoin dynamic string joining" \
  "42_school/C07/ex03/ft_strjoin.c"

# ── May 8 (Thu) - Rush00 ──────────────────────────────────────────────────────
c "2025-05-08T09:00:00" "feat: Rush00 ft_putchar and main weekend project" \
  "42_school/Rush00/ft_putchar.c" \
  "42_school/Rush00/main.c"

c "2025-05-08T11:00:00" "feat: Rush00 rush03 implementation" \
  "42_school/Rush00/rush03.c"

c "2025-05-08T13:30:00" "fix: fix Rush00 output formatting" \
  "42_school/Rush00/rush03.c"

c "2025-05-08T15:00:00" "feat: Born2beroot project signature" \
  "Born2beroot/signature.txt"

c "2025-05-08T16:30:00" "docs: update README with 42 school progress" \
  "."

# ── May 12 (Mon) - libft start ────────────────────────────────────────────────
c "2025-05-12T09:00:00" "feat: libft ft_isalpha ft_isdigit ft_isalnum" \
  "libft2project/ft_isalpha.c" \
  "libft2project/ft_isalnum.c" \
  "libft2project/ft_isascii.c"

c "2025-05-12T11:00:00" "feat: libft ft_isprint ft_strlen ft_memset" \
  "libft2project/ft_isprint.c" \
  "libft2project/ft_memset.c"

c "2025-05-12T13:30:00" "feat: libft ft_bzero ft_memcpy ft_memmove" \
  "libft2project/ft_bzero.c" \
  "libft2project/ft_memcpy.c" \
  "libft2project/ft_memmove.c"

c "2025-05-12T15:00:00" "feat: libft ft_memchr ft_memcmp" \
  "libft2project/ft_memchr.c" \
  "libft2project/ft_memcmp.c"

c "2025-05-12T16:30:00" "feat: libft ft_strlen ft_strlcpy ft_strlcat" \
  "libft2project/ft_strlen.c" \
  "libft2project/ft_strlcpy.c" \
  "libft2project/ft_strlcat.c"

# ── May 13 (Tue) - libft cont ─────────────────────────────────────────────────
c "2025-05-13T09:00:00" "feat: libft ft_toupper ft_tolower ft_strchr ft_strrchr" \
  "libft2project/ft_toupper.c" \
  "libft2project/ft_tolower.c" \
  "libft2project/ft_strchr.c" \
  "libft2project/ft_strrchr.c"

c "2025-05-13T11:00:00" "feat: libft ft_strncmp ft_strnstr ft_strdup" \
  "libft2project/ft_strncmp.c" \
  "libft2project/ft_strnstr.c" \
  "libft2project/ft_strdup.c"

c "2025-05-13T13:30:00" "feat: libft ft_atoi ft_calloc" \
  "libft2project/ft_atoi.c" \
  "libft2project/ft_calloc.c"

c "2025-05-13T15:00:00" "feat: libft ft_substr ft_strjoin ft_strtrim" \
  "libft2project/ft_substr.c" \
  "libft2project/ft_strjoin.c" \
  "libft2project/ft_strtrim.c"

c "2025-05-13T16:30:00" "feat: libft ft_split ft_itoa" \
  "libft2project/ft_split.c" \
  "libft2project/ft_itoa.c"

# ── May 14 (Wed) - libft bonus ────────────────────────────────────────────────
c "2025-05-14T09:00:00" "feat: libft ft_strmapi ft_striteri" \
  "libft2project/ft_strmapi.c" \
  "libft2project/ft_striteri.c"

c "2025-05-14T11:00:00" "feat: libft ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd" \
  "libft2project/ft_putchar_fd.c" \
  "libft2project/ft_putstr_fd.c" \
  "libft2project/ft_putendl_fd.c" \
  "libft2project/ft_putnbr_fd.c"

c "2025-05-14T13:30:00" "feat: libft bonus ft_lstnew ft_lstadd_front" \
  "libft2project/ft_lstnew.c" \
  "libft2project/ft_lstadd_front.c"

c "2025-05-14T15:00:00" "feat: libft bonus ft_lstsize ft_lstlast ft_lstadd_back" \
  "libft2project/ft_lstsize.c" \
  "libft2project/ft_lstlast.c" \
  "libft2project/ft_lstadd_back.c"

c "2025-05-14T16:30:00" "feat: libft bonus ft_lstdelone ft_lstclear ft_lstiter ft_lstmap" \
  "libft2project/ft_lstdelone.c" \
  "libft2project/ft_lstclear.c" \
  "libft2project/ft_lstiter.c" \
  "libft2project/ft_lstmap.c"

# ── May 15 (Thu) - libft finalize ─────────────────────────────────────────────
c "2025-05-15T09:00:00" "feat: libft add Makefile and header" \
  "libft2project/Makefile" \
  "libft2project/libft.a"

c "2025-05-15T11:00:00" "fix: fix ft_split edge cases with empty strings" \
  "libft2project/ft_split.c"

c "2025-05-15T13:30:00" "fix: fix ft_strtrim whitespace handling" \
  "libft2project/ft_strtrim.c"

c "2025-05-15T15:00:00" "fix: fix ft_lstmap memory leak on failure" \
  "libft2project/ft_lstmap.c"

c "2025-05-15T16:30:00" "refactor: clean up libft functions" \
  "libft2project/ft_atoi.c"

# ── May 19 (Mon) - get_next_line ──────────────────────────────────────────────
c "2025-05-19T09:00:00" "feat: get_next_line header file" \
  "get_next_line/get_next_line.h"

c "2025-05-19T11:00:00" "feat: get_next_line utils implementation" \
  "get_next_line/get_next_line_utils.c"

c "2025-05-19T13:30:00" "feat: get_next_line main implementation" \
  "get_next_line/get_next_line.c"

c "2025-05-19T15:00:00" "fix: fix get_next_line buffer handling" \
  "get_next_line/get_next_line.c"

c "2025-05-19T16:30:00" "fix: fix memory leak in get_next_line" \
  "get_next_line/get_next_line_utils.c"

# ── May 20 (Tue) - ft_printf start ───────────────────────────────────────────
c "2025-05-20T09:00:00" "feat: ft_printf header files" \
  "ft_printf/ft_printf.h" \
  "ft_printf/ft_utils.h"

c "2025-05-20T11:00:00" "feat: ft_printf libft dependencies" \
  "ft_printf/libft/ft_strlen.c" \
  "ft_printf/libft/ft_strchr.c" \
  "ft_printf/libft/ft_strdup.c" \
  "ft_printf/libft/libft.h"

c "2025-05-20T13:30:00" "feat: ft_printf libft memory functions" \
  "ft_printf/libft/ft_bzero.c" \
  "ft_printf/libft/ft_calloc.c" \
  "ft_printf/libft/ft_memset.c" \
  "ft_printf/libft/ft_memcpy.c" \
  "ft_printf/libft/ft_memmove.c"

c "2025-05-20T15:00:00" "feat: ft_printf libft string functions" \
  "ft_printf/libft/ft_strjoin.c" \
  "ft_printf/libft/ft_strlcat.c" \
  "ft_printf/libft/ft_strlcpy.c" \
  "ft_printf/libft/ft_strnstr.c" \
  "ft_printf/libft/ft_strncmp.c" \
  "ft_printf/libft/ft_strrchr.c"

c "2025-05-20T16:30:00" "feat: ft_printf libft utility functions" \
  "ft_printf/libft/ft_atoi.c" \
  "ft_printf/libft/ft_itoa.c" \
  "ft_printf/libft/ft_isalnum.c" \
  "ft_printf/libft/ft_isalpha.c" \
  "ft_printf/libft/ft_isascii.c" \
  "ft_printf/libft/ft_isprint.c"

# ── May 21 (Wed) - ft_printf cont ────────────────────────────────────────────
c "2025-05-21T09:00:00" "feat: ft_printf libft output functions" \
  "ft_printf/libft/ft_putchar_fd.c" \
  "ft_printf/libft/ft_putendl_fd.c" \
  "ft_printf/libft/ft_putnbr_fd.c" \
  "ft_printf/libft/ft_putstr_fd.c"

c "2025-05-21T11:00:00" "feat: ft_printf libft split substr trim" \
  "ft_printf/libft/ft_split.c" \
  "ft_printf/libft/ft_substr.c" \
  "ft_printf/libft/ft_strtrim.c" \
  "ft_printf/libft/ft_strmapi.c" \
  "ft_printf/libft/ft_striteri.c"

c "2025-05-21T13:30:00" "feat: ft_printf ft_char and ft_string handlers" \
  "ft_printf/ft_char.c" \
  "ft_printf/ft_string.c"

c "2025-05-21T15:00:00" "feat: ft_printf number and unsigned handlers" \
  "ft_printf/ft_put_number.c" \
  "ft_printf/ft_put_unsigned.c"

c "2025-05-21T16:30:00" "feat: ft_printf hexadecimal converter and printer" \
  "ft_printf/ft_hexadecimal_converter.c" \
  "ft_printf/ft_put_hexadecimal.c"

# ── May 22 (Thu) - ft_printf finalize ────────────────────────────────────────
c "2025-05-22T09:00:00" "feat: ft_printf pointer print implementation" \
  "ft_printf/ft_pointer_print.c"

c "2025-05-22T11:00:00" "feat: ft_printf main ft_printf function" \
  "ft_printf/ft_printf.c"

c "2025-05-22T13:30:00" "feat: ft_printf Makefile" \
  "ft_printf/Makefile"

c "2025-05-22T15:00:00" "fix: fix ft_printf percent sign handling" \
  "ft_printf/ft_printf.c"

c "2025-05-22T16:30:00" "fix: fix hexadecimal uppercase conversion" \
  "ft_printf/ft_put_hexadecimal.c"

echo ""
echo "========================================"
echo "Done! Now run:"
echo "  git push -u origin main --force"
echo "========================================"
