int	mediana(t_nlist	*l)
{
	int		m;
	t_nlist	*n;

	n = l;
	while (n)
	{
		if (ft_nlstsmaller(l, n->num) == ft_nlstsize(l) / 2 
			|| ft_nlstbigger(l, n->num) == ft_nlstsize(l) / 2)
		{
			return(n->num);
		}
		n = n->next;
	}
	return(n->num);
}
