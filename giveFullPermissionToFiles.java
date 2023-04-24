	public void giveFullPermissionToFiles(String path) {
		
        Process p;
        try {
            p = Runtime.getRuntime().exec("sudo chmod 777 -Rf "+path);
            BufferedReader br = new BufferedReader(
                new InputStreamReader(p.getInputStream()));
            while (( br.readLine()) != null) {
            }
            p.waitFor();
            p.destroy();
        } catch (Exception e) {}
        
		
	}
