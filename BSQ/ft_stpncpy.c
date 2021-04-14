char					*ft_stpncpy(char *dst, const char *src, long len)
{
	if (src && dst)
		while (len-- > 0)
			*dst++ = *src ? *src++ : '\0';
	return (dst);
}