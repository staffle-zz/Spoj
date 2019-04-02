	void dfs(int x)
	{
		visited[x]=true;

		for(auto& i : G[x])
		{
			if(visited[i]==false)
			{
				dfs(i);
			}
		}
	}