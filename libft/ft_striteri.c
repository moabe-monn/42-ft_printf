/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:10:14 by moabe             #+#    #+#             */
/*   Updated: 2025/05/08 16:38:12 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// // 例1：偶数インデックスの文字を大文字に変える関数
// void to_upper_even(unsigned int i, char *c) {
//     if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }
// // 例2：すべての文字を 'z' にする関数
// void replace_all_with_z(unsigned int i, char *c) {
//     (void)i;
//     *c = 'z';
// }

// int main(void) {
//     char str1[] = "abcdef";
//     char str2[] = "hello";

//     // テスト1：偶数インデックスの文字だけ大文字に
//     ft_striteri(str1, to_upper_even);
//     printf("Test 1: %s\n", str1);  // 結果: "AbCdEf"

//     // テスト2：すべて 'z' に書き換える
//     ft_striteri(str2, replace_all_with_z);
//     printf("Test 2: %s\n", str2);  // 結果: "zzzzz"

//     // テスト3：NULLポインタに対する挙動確認（クラッシュしないように）
//     ft_striteri(NULL, replace_all_with_z);

//     return 0;
// }
